#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(i=0;i<=n;i++)
    {
        if(s.find(i)==s.end())
        {
            cout<<i<<endl;
            break;
        }
    }
}
