#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        string ss="";
        string s;
        cin>>s;
        map<char,int>mp;
        int cm=0,maax;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }

        for (const auto& pair : mp)
        {
            if (pair.second > cm)
            {
                cm = pair.second;
            }
        }

            for(auto u:mp)
            {
                //cout<<u.second<<endl;
                if(u.second==cm)
                {
                    //cout<<"sdu"<<endl;
                    ss=ss+u.first;
                }

            }


        cout<<ss<<endl;
    }
}
