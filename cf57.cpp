#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,cnt=0;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto u : mp)
    {
        if(u.second>=2)
        {
            cnt=cnt+(u.second/2);
        }
    }
    cout<<cnt<<endl;
}
