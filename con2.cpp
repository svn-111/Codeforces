
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m;
        int ar[n];
        vector<int>v(50000);
        vector<int>v1;
        for(int i=0;i<m;i++)
        {
             cin>>x;
             if(v[x]==0)
             {
                 v[x]++;
                 v1.push_back(i+1);
             }

        }
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<endl;
        //sort(v1.begin(),v1.end());
        //reverse(v1.begin(),v1.end());
        int p=n-v1.size();
        /*for(int i=0;i<p;i++)
            cout<<-1<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
*/
    }
}
