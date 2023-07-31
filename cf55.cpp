#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,p=0;
    cin>>n;
    map<string,int>mp;
    for(i=0; i<n; i++)
    {
        string s,ss;
        cin>>s;
        ss=s;
        reverse(ss.begin(),ss.end());
        if(s==ss)

            mp[s]++;
        else
        {
            mp[s]++;
            reverse(s.begin(),s.end());
            mp[s]++;
            if(mp.size()>p)

                cnt++;
        }
        p=mp.size();
    }
    int ans=mp.size()-cnt;
    cout<<ans<<endl;
}
