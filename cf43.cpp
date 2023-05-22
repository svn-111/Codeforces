#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int run=100;
    int check=s.length()-1;
    for(int i=0; i<check; i++)
    {
        //cout<<"checklen-->"<<check<<endl;
        //cout<<"check-->"<<i<<endl;
        if(s[i]=='S' && s[i+1]=='T')
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i=i-2;

            if(i<0)
                i=-1;
            //cout<<i<<endl;
            //cout<<"length"<<s.length()<<endl;
        }
        check=s.length()-1;
        //if(s.length()==0)
          //  break;
       // cout<<s<<endl;
    }
    cout<<s.length()<<endl;
}
