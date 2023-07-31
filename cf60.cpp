#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
	ll n,k,a,b,sum=0;
	cin>>n>>k;
	vector<pair<ll,ll>>v;
	vector<ll>p;
	for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end());
        for(auto u : v)
        cout<<u.first<<" "<<u.second<<endl;
    for(ll i=0;i<v.size();i++)
    {
        sum=sum+v[i].second;
        p.push_back(sum);
        sum=sum-v[i].second;
    }
    for(auto u: p)
        cout<<u<<endl;

}
