#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()>s2.length())
        flag=1;
    else if(s1.length()<s2.length())
        flag=0;
    else
    {
        if(s1[0]>s2[0])
            flag=1;
        else if(s1[0]<s2[0])
            flag=0;
        else
        {

        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]<s2[i])
            {
                flag=0;
                break;
            }
        }
        }
    }
    if(flag)
        cout<<"GREATER"<<endl;
    else
        cout<<"LESS"<<endl;

}

