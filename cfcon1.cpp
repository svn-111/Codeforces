#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            long long n,i;
            cin>>n;
            vector<long long int>oddb;
            vector<long long int>evenb;
            vector<long long int>odds;
            vector<long long int>evens;
            for(i=1;i<=(2*n);i++)
            {
                if(i%2==0 && i>n)
                {
                    evenb.push_back(i);

                }
                else if(i%2==0 && i<=n)
                {
                     evens.push_back(i);
                }

                else if(i%2!=0 && i>n)
                {
                    oddb.push_back(i);

                }
                else
                {
                    odds.push_back(i);
                }

            }
            sort(odds.begin(),odds.end());
            sort(oddb.begin(),oddb.end());
           // reverse(oddb.begin(),oddb.end());
            sort(evens.begin(),evens.end());
            sort(evenb.begin(),evenb.end());
            reverse(evenb.begin(),evenb.end());
            for(i=0;i<n/2;i++)
            {
                cout<<evenb[i]<<" ";
                cout<<evens[i]<<" ";
            }
            cout<<endl;
            for(i=0;i<n/2;i++)
            {
                cout<<odds[i]<<" ";
                cout<<oddb[i]<<" ";

            }
            cout<<endl;

        }
}
