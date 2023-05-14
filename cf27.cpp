#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n=1000000,i,j;
    //cin>>n;
    long long int prime[n]={0};
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
                prime[j]=1;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }
    cout<<"\n"<<endl;
}
