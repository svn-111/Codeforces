#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,p,flag=1,q,r,m,n;
        //string p;
        string s,ss1="",ss2="";
        cin>>s;
        //cout<<s<<endl;
        for(int i=0;i<s.size();i++)
        {
            num=(int)s[i];
            if(num%2==0)
            {
                //cout<<num<<endl;
                p=(num-48)/2;
                ss1+=to_string(p);
                ss2+=to_string(p);
            }
            else
            {
                q=(num-48)/2;
                r=(num-48)-q;
                if(flag)
                {
                    ss1+=to_string(r);
                    ss2+=to_string(q);
                    flag=0;
                }

                else
                {
                    ss1+=to_string(q);
                    ss2+=to_string(r);
                    flag=1;
                }

            }

        }
        m=stoi(ss1);
        n=stoi(ss2);
        cout<<m<<" "<<n<<endl;
    }
}
