#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,a,b,j,cnt=0,con=0;
        string s,ss;
        cin>>s;
        n=s.size();
        ss=s+s;
        vector<int>v;
        // if(s[0]=='1' && s[1]=='1')
        // con++;
        for(i=0; i<s[i]; i++)
        {
            if(s[i]=='1')
                con++;
        }


        if(con==n || con==0)
        {
            if(con==0)
                cout<<0<<endl;
            else
                cout<<n*n<<endl;
        }


        else
        {


            for(i=0; i<n*2; i++)
            {
                if(ss[i]=='1')
                    cnt++;
                else
                {
                    v.push_back(cnt);
                    cnt=0;
                }

            }
            a=*max_element(v.begin(),v.end());
            if(a==1)
                cout<<1<<endl;
            else
            {
                //cout<<"Hao"<<endl;
                cout<<(a-1)*2<<endl;
            }
        }
    }
}

