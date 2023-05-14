#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,f,m,t,sum=0;
    cin>>p>>f>>m>>t;
    while(sum<p)
    {
        sum=sum+f;
        if(sum>p)
        {
            cout<<"F"<<endl;
            break;
        }
        sum=sum+m;
        if(sum>p)
        {
            cout<<"M"<<endl;
            break;
        }
        sum=sum+t;
        if(sum>p)
        {

            cout<<"T"<<endl;        }
    }
}
