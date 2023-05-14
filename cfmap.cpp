#include<bits/stdc++.h>
using namespace std;
void habijabi1()
{
    int cnt[1000]={0};

    int n,x;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        cnt[ar[i]]++;
    }
    for(int i=0;i<100;i++)
    {
        if(cnt[i]!=0)
            cout<<i<<"--"<<cnt[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    map<int,int>id;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(auto u : v)
        id[u]++;
    for(auto u : id)
    {
        if(u.second>=1)cout<<u.first<<" "<<u.second<<endl;
    }

}
