#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[5];
    s[0]="and";
    s[1]="not";
    s[2]="that";
    s[3]="the";
    s[4]="you";

    int n,flag=0;
    cin>>n;
    string ss[n];
    for(int i=0;i<n;i++)
        cin>>ss[i];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]==ss[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
