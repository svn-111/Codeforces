#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int ar[n];
        vector<int>odd,even;
        int flag=0;
        for(i=1;i<=n;i++)
        {
           cin>>ar[i];
           if(i%2==0)
                even.push_back(ar[i]);
           else
            odd.push_back(ar[i]);
        }
        if(odd[0]%2==0)
        {
            for(i=1;i<odd.size();i++)
            {
                if(odd[i]%2!=0)
                {
                    flag=1;
                }


            }
        }
        if(odd[0]%2!=0)
        {
            for(i=1;i<odd.size();i++)
            {
                if(odd[i]%2==0)
                   {
                       flag=1;


                   }
            }
        }
        if(even[0]%2==0)
        {
            for(i=1;i<even.size();i++)
            {
                if(even[i]%2!=0)
                {
                    flag=1;
                }

            }
        }
        if(even[0]%2!=0)
        {
            for(i=1;i<even.size();i++)
            {
                if(even[i]%2==0)
                {
                    flag=1;
                }

            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
