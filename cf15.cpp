#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            if(s[i+1]=='0')
            {
                cnt=cnt+1;;
                i=i+1;
            }
            else
            {
                cnt=cnt+1;
            }
        }
        else
            cnt=cnt+1;
    }
    cout<<cnt<<endl;
}
