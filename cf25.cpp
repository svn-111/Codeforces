#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0,i;
    int ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=a;i<=b;i++)
        sum=sum+ar[i];
    cout<<sum<<endl;
}
