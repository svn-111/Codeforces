#include<bits/stdc++.h>
using namespace std;
bool isbal(char a,char b)
{
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {


    string s;
    cin>>s;
    stack<char>st;
    int flag=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
        else
        {
            if(st.empty())
                flag=0;
            else
            {
                if(isbal(st.top(),s[i]))
                    st.pop();
                else
                    flag=0;
            }
        }
    }
    if(!st.empty())
        flag=0;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
