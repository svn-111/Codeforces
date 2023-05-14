#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            flag=1;
    }
    if(flag==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}
