#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int flag=0,cnt=0;
    string s,t;
    cin>>s>>t;
    for(int i=0,j=0;i<s.size() && j<s.size();i++,j++)

    {
        if(s[i]!=t[j])
        {
           cnt=i+1;
           flag=1;
           break;
        }
    }
    if(!flag)
        cout<<t.size()<<endl;
    else
        cout<<cnt<<endl;
}
