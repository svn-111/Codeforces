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
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n==1)
        {
            if(ar[0]>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            sort(ar,ar+n);
            if(((ar[n-1]-1)==ar[n-2]) || (ar[n-1]==ar[n-2]))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
