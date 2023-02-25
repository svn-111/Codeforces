#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,a=0,p,t,s;
    double q;
    cin>>n>>t;
    int ar[n],ar1[t];
    //string s1[t];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        q=ar[i]%1000;
        v.push_back(q);
    }
    int cnt=0;
    for(int i=0;i<t;i++)
    {
        cin>>ar1[i];
        s=ar1[i]/1;
        for(int j=0;j<v.size();j++)
        {
            if(s==v[j])
            {
                cnt++;
                v.erase(v.begin()+j);
            }

        }
    }
   cout<<cnt<<endl;

}
