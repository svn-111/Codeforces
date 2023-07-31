#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    set<ll>s;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==1)
            s.insert(b);
        else if(a==2)
        {
            if(s.find(b)!=s.end())
                s.erase(b);
        }

        else
        {
           ll  p=s.size();
            s.insert(b);
            if(s.size()>p)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
}
