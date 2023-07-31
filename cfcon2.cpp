#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d;
    cin>>n>>d;
    pair<pair<int,int>,string>mp;
    for(int i=0;i<n;i++)
    {
       cin>>mp.first.first;
       cin>>mp.first.second;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
            cout<<mp[i][j]<<endl;
    }
}
