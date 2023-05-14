#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    int cnt=0;
    for(auto u : mp)
    {
        if(u.second>u.first)
            cnt=cnt+(u.second-u.first);
        else if(u.second<u.first)
            cnt=cnt+u.second;

    }
    cout<<cnt<<endl;
}
