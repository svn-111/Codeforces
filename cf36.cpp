#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int ar[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            //sum+=ar[i];
        }
        for(i=0;i<k;i++)
        {
            int l,r,p;
            cin>>l>>r>>p;
            for(int j=l;j<=r;j++)
                ar[j]=p;
            for(int j=0;i<n;j++)
                sum=sum+ar[j];
            if(sum%2!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
