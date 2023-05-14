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
        int ar[n],p,q,sum=0,flag=0,i,j;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        for(i=0;i<n;i++)
        {
            p=(sum-ar[i])%(n-1);
            if(p==0)
            {
                q=(sum-ar[i])/(n-1);
                if(q==ar[i])
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
