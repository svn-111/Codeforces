#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,i,j,cnt=0;
    cin>>n;
    vector<long long int>v(n);
    v[1]=2;
    v[0]=2;
    while(cnt!=n)
    {
        for(i=2;;i++)
        {
            for(j=i*i;;j+=i)
            {
                v[j]=1;
                cnt++;
            }

        }

    }

    for(i=0; i<=n; i++)
    {
        if(v[i]==0)
            cout<<i<<" ";
    }
}
