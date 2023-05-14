#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
       long long int ar[n],br[n],sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            br[i]=ar[i];
        }
        sort(ar,ar+n);
        sort(br,br+n);
        sum1=br[n-1]+br[n-2];
        sum2=ar[0]+ar[1];
        if(sum1>sum2)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
