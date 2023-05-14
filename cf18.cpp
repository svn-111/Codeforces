#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,cnt=0,i;
        cin>>n;
        long long int ar[n];
        map<ll,ll>v;
        for(i=0;i<n;i++)
           {
             cin>>ar[i];
             //v[x]++;

           }
           for(i=n-1;i>=0;i--)
           {
               if(v[ar[i]]==0)
               {
                   v[ar[i]]++;
                   cnt++;
               }
               else
               {
                   break;
               }
           }
           cout<<n-cnt<<endl;

    }

}
