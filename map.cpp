#include<bits/stdc++.h>
using namespace std;
int ar[5];
int solve ()
{
    int ar1[5]= {0};
    map<string,int>mp;
    map<string,string>mp1;
    mp["Shovon"]=1;
    mp["Nishi"]=2;
    mp1["Shovon"]="Male";
    mp1["Nishi"]="Transgender";

    // cout<<mp["Nishi"]<<endl;
    for(auto x: mp)
        cout<<x.first<<"   "<<x.second<<endl;
    for(auto y:mp1)
        cout<<y.first<<"   "<<y.second<<endl;
    for(auto i:ar)
        cout<<i<<endl;
    for(auto j:ar1)
        cout<<j<<endl;

}
int longmap()
{
   long long ar[5]={13874378,12,12,34897,13874378} ;
   map<long long,int>mp;
   for(auto u:ar)
        mp[u]++;
}
int prc1()
{
    int ar[10];
    for(int i=0;i<10;i++)
        cin>>ar[i];
    map<int,int>mp;
    for(auto u:ar)
        mp[u]++;
    //int p=*max_element(mp.second begin(),mp.end());
    //cout<<p<<endl;
    int p=0;
    int q=0;
    for(auto s:mp)
    {
        if(s.second>p)
        {
            p=s.second;
            q=s.first;
        }

    }
      cout<<q<<endl;
}
int main()
{
    //longmap();
    prc1();
}
