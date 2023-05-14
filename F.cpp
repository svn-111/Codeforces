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
    ll n,k,i,j,sum=0;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>mp;
    for(i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    char c='A';
    for(char ch='a'; ch<='z'; ch++)
    {
        ll Min=min(mp[ch],mp[c]);
        ll diff=abs(mp[ch]-mp[c]);
        if(diff>=2 && k>0)
        {
            sum+=min(k,diff/2);
            k-=min(k,diff/2);
        }
        sum+=Min;
        c++;
    }
    cout<<sum<<endl;
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
