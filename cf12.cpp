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
        int ar[n];
        cin>>ar[0];
        int p=ar[0];
        int flag=1;
        for(int i=1;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%p!=0)
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
