#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss="";
    cin>>s;
    for(int i=0;i<6;i++)
        ss=ss+s;
    for(int i=0;i<6;i++)
        cout<<ss[i];
    cout<<endl;
}
