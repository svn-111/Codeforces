#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define pf       push_front
#define mod      1000000007
#define MAX      100000000
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
using namespace __gnu_pbds;

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

const ll inf = (ll)1e18;
const ll N = (ll)1e6+1;
const ll MOD = (ll)1e9+7;
//top->bottom->left->right->top-left->top-right->bottom-left->bottom-right
ll dx[] = {-1, 1,  0, 0, -1, -1,  1, 1};
ll dy[] = {0,  0, -1, 1, -1,  1, -1, 1};

bool desc(pair<ll,ll>a,pair<ll,ll> b)
{
    if(a.first>b.first) return true;
    return false;
}

ll findLowerBound(vector<pair<ll, ll> >& arr,pair<ll,ll>&p)
{
    ll up = lower_bound(arr.begin(), arr.end(), p)-arr.begin();
    return up;
}

void solve()
{
    ll n,k,i,j;
    cin>>n;
    string s;
    cin>>s;
    string ss="";
    map<char,ll>mp;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string str="meow";
    j=0;
    for(i=0; i<n; i++)
    {
        if(s[i]==str[j])
        {
            continue;
        }
        else
        {
            j++;
            if(j>4)
            {
                cout<<"NO"<<endl;
                return ;
            }
            if(str[j]!=s[i])
            {
                cout<<"NO"<<endl;
                return ;

            }
        }
    }

    cout << "YES" << endl;

}


int main()
{
    fast;
    ll t=1,c=1;
    cin>>t;
    while(t--)
    {
        solve();
        c++;
    }
    return 0;
}
