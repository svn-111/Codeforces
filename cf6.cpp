#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll t,n,a,b,c,d,e,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        d=1;
        c=1;
        for(int i=2; i<=n; i++)
        {
            cin>>b;
            if(a!=b)
                f=i;
            else
                c=38467;
        }
        if(c==1)
            cout<<d<<endl;
        else
            cout<<f<<endl;




    }
}
