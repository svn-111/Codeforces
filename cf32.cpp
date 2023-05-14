#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        /*  string s="";
          int mark=0;
          for(int i=1;i<101;++i)
          {
              if(i%3==0 && i%5!=0)
              {
                  s=s+"F";
                  mark=0;
                  //cout<<i<<"cndf"<<"   ";
              }
              else if(i%5==0 && i%3!=0)
              {
                  s=s+"B";
                  mark=0;
                 // cout<<i<<"cndb"<<"   ";
              }
              else if(i%3==0 && i%5==0)
              {
                  s=s+"FB";
                  // cout<<i<<"cndfb"<<"   ";
                  mark=0;
                  i=i+1;
              }
              else
              {
                  if(mark==0)
                  {
                      s=s+"F";
                      mark=1;
                     // cout<<i<<"F dhukce"<<"   ";
                  }
                  else
                  {
                      s=s+"B";
                      mark=0;
                      //cout<<"sdgsh";
                     // cout<<i<<"teshmara"<<"   ";
                  }
              }
             // cout<<endl;

          }
          for(int i=0;i<100;i++)
               cout<<i+1<<s[i]<<" ";

               cout<<"\n\n\n"<<endl;*/

        string s = "";
        int i;
        for (int i = 1; i <= 100; ++i)
        {
            if (i % 3 == 0) s += "F";
            if (i % 5 == 0) s += "B";
        }



        int n;
        cin>>n;
        string s2;
        cin>>s2;
        int j,k,flag=0,cnt,p;



        if(s.find(s2)==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
}
}
