#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;
    //cout<<s<<endl;
    string tmp;
    vector<string>str;
    for(int i=0;i<s.size();i++)
    {
        if(isspace(s[i]))
        {
            str.push_back(tmp);
            tmp.clear();
        }
        else
           tmp+=s[i];
    }
    str.push_back(tmp);
   map<string,int>mp;
   for(auto u : str)
   {
       mp[u]++;
   }
   int mx=0;
   for(auto u : str)
   {
      mx=max(mx,mp[u]);
   }
   string ans;
  for(auto u : str)
  {
      if(mp[u]==mx)
      {
          ans=u;
          break;
      }


  }
  cout<<ans<<endl;
  std::string st = std::to_string(mx);
  string neo;
  neo=ans+mx;
  cout<<neo<<endl;

}
