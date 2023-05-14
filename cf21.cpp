#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,cnt=0,flag=0;
        string str;

        cin>>str;
        // unordered_set<char> s;
        vector<int>v(100);
        for (int i = 0; i < str.size(); i++)
        {

            // s.insert(str[i]);
            v[str[i]]++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        if(v[0]==4)
            cout<<-1<<endl;
        else if(v[0]==3)
            cout<<6<<endl;
        else
            cout<<4<<endl;


                // cnt=s.size();


        }
}
