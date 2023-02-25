#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        long long Max=1e18;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v((n+1),0);
        for(i=0;i<n;i++)
        {
            if(s[i]=='W')
                v[i+1]=v[i]+1;
            else
                v[i+1]=v[i];
        }
        for(i=k;i<=n;i++)
        {
           Max=min(Max,(long long)(v[i]-v[i-k]));
        }
        cout<<Max<<endl;
    }
}
