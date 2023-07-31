#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first>b.first)
        return true;
    else if(a.first<b.first)
        return false;
    else
    {
        if(a.second<b.second)
            return true;
        else
            return false;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int>v(n);
        vector<pair<ll,ll>>dex;
        vector<pair<ll,ll>>dest;
        vector<pair<ll,ll>>desk;
        vector<ll>solve;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            dex.push_back(make_pair(v[i],i+1));
        }
        for(auto u:dex)
        {
            if(u.first%k==0)
            {
                solve.push_back(u.second);
            }
            else
            {
                dest.push_back(make_pair((u.first%3),u.second));
            }
        }
        sort(dest.begin(),dest.end(),cmp);
        for(auto u : dest)
            solve.push_back(u.second);
        for(auto u : solve)
            cout<<u<<" ";
        cout<<endl;

    }
}
