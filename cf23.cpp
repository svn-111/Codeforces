#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       //cout<<"By the name of Almighty"<<endl;
       int n;
       cin>>n;
       char k;
       cin>>k;
       int cnt=0;
       string s;
       cin>>s;
       int flag=0;
        string ss="";
        if(s[0]<k)
            ss=k+s;
        else
        {

       for(int i=0;i<n-1;i++)
       {
           if(s[i]>=k && s[i+1]<k)
           {
               cnt=i+1;
               flag=1;
               break;
           }


       }
       if(!flag)
        cnt=n;
       //cout<<"    "<<cnt<<endl;

        for(int i=0;i<cnt;i++)
            ss=ss+s[i];
        ss=ss+k;
        for(int i=cnt;i<n;i++)
            ss=ss+s[i];
        }

        cout<<ss<<endl;

   }
}
