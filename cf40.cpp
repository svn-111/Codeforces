#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    long long int a,b,n;
    cin>>n;
    long long int ar[n],i,p,q,m,o;
    cin>>ar[0];
    vector<long long int>v,v1,v2;

    for(i=1;i<n;i++)
    {
        cin>>ar[i];
        p=ar[i]*ar[i-1];
        v.push_back(p);
        if(ar[i]!=0)
        {
            v1.push_back(ar[i]);
        }
        for(i=1;i<v1.size()-1;i++)
        {
            q=v[i]*v[i-1];
            v2.push_back(q);
        }
    }
    m=*max_element(v.begin(),v.end());
    n=*max_element(v2.begin(),v2.end());
    if(m>=o)
        cout<<m<<endl;
    else
        cout<<o<<endl;

}
}
