#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll sum=0,i;
    ll cnt=0;
    ll j=0;
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
        if(sum<=k)
        {
            cnt=cnt+1;
        }
        else
        {
            sum=sum-ar[j];
            j++;
        }
    }
    cout<<cnt<<endl;
}
