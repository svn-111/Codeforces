#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,p,q;
        cin>>a>>b;
        p=0;
        q=0;
        p=min(a,b);
        q=max(a,b);
        if(p==1)
        {
            //cout<<"jhfdg"<<endl;
            if(q%2==0)
                cout<<"Burenka"<<endl;
            else if(q%2!=0)
                cout<<"Tonya"<<endl;
        }
        else
        {
            //cout<<"jhusgd"<<endl;
            if(p%2==0 && q%2==0)
                cout<<"Tonya"<<endl;
            else if(p%2!=0 && q%2!=0)
                cout<<"Tonya"<<endl;
            else
                cout<<"Burneka"<<endl;
        }
    }
}
