#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k,a,o;
        cin>>n>>k;
        vector<pair<ll,ll>>vp;
        vector<pair<ll,ll>>vq;
        int ar[n];
        //ll ar[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            ar[i]=a;
            vp.push_back(make_pair(a,i));

        }
        sort(ar,ar+n);
        if(ar[0]<k)
             o=k-ar[0];
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        for(auto u: vp)
        {
            u.first=u.first+o;
        }

        for(auto u: vp)
        {
            vq.push_back(make_pair((u.first/k),u.second));
        }
        for(auto u: vq)
            cout<<u.first<<" "<<u.second<<endl;


    }
}
