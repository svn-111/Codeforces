#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int flag=0;
       vector<int>v(n);
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           mp[i]=v[i];
       }
       for(int i=0;i<mp.size();i++)
       {
           if(mp[i]<=(i+1))
           {
                cout<<mp[i]<<" "<<i+1<<endl;
               flag=1;
               break;
           }
       }
       if(flag)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;

    }

}
