#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,sum1=0,sum2=0,m,n,cnt=0,p,q;
        cin>>a>>b;
        cin>>m>>n;
        if(m<n)
        {
            if(a<b)
                cout<<m*a<<endl;
            else
                cout<<m*b<<endl;
        }
        else
        {
                p=m/(n+1);
                q=m%(n+1);
                sum1=(p)*a*n;
                sum1+=min(q*a,q*b);
                sum2=min(m*a,m*b);
                if(sum1<sum2)
                    cout<<sum1<<endl;
                else
                    cout<<sum2<<endl;
            }
        }


        // cout<<sum<<endl;
    }


