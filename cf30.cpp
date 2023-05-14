#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    pair<int,int>ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ar[i]={a,b};
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].first<<"   "<<ar[i].second<<endl;
    }
}
