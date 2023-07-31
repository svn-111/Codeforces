#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,x,p=0;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
        mp[x-1]++;
        mp[x+1]++;
    }
    for(auto u:mp)
    {
        p=max(p,u.second);
    }
    cout<<p<<endl;
}

