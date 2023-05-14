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
        int ar[n-1];
        int cnt=0,flag=0,i;
        for(i=0; i<n-1; i++)
            cin>>ar[i];
        if(ar[0]<ar[1])
        {
            cnt=0;
            flag=1;

        }

        else
        {
            for(i=1; i<n-1; i++)
            {
                if(ar[i]<ar[i-1] && ar[i]<ar[i+1])
                    cnt=i+1;
                    flag=1;
            }
        }
        if(!flag)
            cnt=n-1;
        for(i=0;i<cnt;i++)
            cout<<ar[i]<<" ";
        cout<<0<<" ";
        for(i=cnt;i<n-1;i++)
            cout<<ar[i]<<" ";
        cout<<endl;


    }
}
