#include<bits/stdc++.h>
using namespace std;
int one()
{
    int m,n;
    cin>>m>>n;
    string ar[m],ar1[n];
    map<string,int>mp;
    for(int i=0; i<m; i++)
    {
        cin>>ar[i];
        string ss="";
        for(int j=3; j<=5; j++)
        {
            ss+=ar[i][j];
        }
        mp[ss]++;
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar1[i];
        cnt=cnt+mp[ar1[i]];
        mp[ar1[i]]=0;
    }
    cout<<cnt<<endl;
}
int two()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p>r) swap(p,r);
        if(q>s) swap(q,s);
        if(p<=r && q>=r)
            cout<<r<<endl;
        else
            cout<<p+r<<endl;
    }
}
int three()
{
    int a,b,c,d;
    cin>>a>>b;
    c=2*a;
    d=(2*a)+1;
    if(b==c || b==d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
int Four()
{
    int n;
    cin>>n;
    char c[n];
    vector<char>real;
    //cin>>s[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];

        if(c[i]=='a')
        {
            if(c[i-1]=='n')
                //c[i+1]=="y";
            {
                real.push_back('y');
            }
        }
        real.push_back(c[i]);
    }
    for(int i=0; i<real.size(); i++)
        cout<<real[i];
    cout<<endl;
    //for(int i=0;i<n;i++)
    //cout<<c[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i,cnt=0,j,flag=0,p;
        cin>>a>>b;
        string s;
        vector<int>v;
        cin>>s;
        for(i=0;i<a;i++)
        {
            for(j=i;j<(i+b) && j<=a;j++)
            {
                if(s[j]=='B')
                    cnt++;
            }
            v.push_back(cnt);
            p=*max_element(v.begin(),v.end());
            if(p>=b)
            {
                flag=1;
                 cout<<"0"<<endl;
                 break;
            }
            if(flag)
                break;

            cnt=0;
        }

        //cout<<p<<endl;
        if(!flag)
            cout<<b-p<<endl;
    }
}
