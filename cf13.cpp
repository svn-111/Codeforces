#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,res=1;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            res*=ar[i];
        }
        cout<<(2022*(res+(n-1)))<<endl;
    }
}
