#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,sum=0,cnt=0,i,j;
    cin>>n>>k;
    ll ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    vector<ll>v;
    if(n==1)
    {
        if(ar[0]>k)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    else
    {


    for(i=0;i<n;i++)
    {
        sum=0;
        cnt=0;
        for(j=i;j<n;j++)
        {
            sum=sum+ar[j];
            if(sum>k)
            {
                //sum=0;
                v.push_back(cnt);

                break;
            }
            else if(sum<k)
            {
                cnt=cnt+1;
            }
            else if(sum==k)
            {
                cnt++;
                v.push_back(cnt);
                break;
            }

            if(j==n-1 && sum<=k)
                //cout<<34987<<endl;
                v.push_back(cnt++);
            //v.push_back(cnt);

        }
    }
    ll p=*max_element(v.begin(),v.end());
    cout<<p<<endl;
    }

}
