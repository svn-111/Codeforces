#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,flag=0;
        cin>>n;
        deque<ll>v;
        vector<ll>v1;

        // v.push_back(0);
        cin>>x;
        v.push_back(x);
        for(int i=1; i<n; i++)
        {
            cin>>x;
            if((v[v.size()-1]<=x) && flag==0 )
            {
                v.pb(x);
                v1.pb(1);
            }
            else if(x<=v[0])
            {
                v.pb(x);
                v1.pb(1);
                flag=1;
            }
            else
            {
                v1.pb(0);
            }

        }
        for(auto u: v1)
            cout<<u;
        cout<<endl;
    }

}
