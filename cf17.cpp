#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1,flag=0,mark=0,ok=0;

        while(i<j)
        {
            if(s[i]!=s[j])
            {
                mark=1;
                if(flag)
                    ok=1;

            }
            else if(mark)
            {
                flag=1;
            }
            i++;
            j--;
        }
        if(ok==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
