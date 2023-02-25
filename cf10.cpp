#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,p,sum=0,sump=0,sumn=0;
        cin>>n;
        int ar[n];
        vector<int>pos,neg;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<0)
            {
                neg.push_back(ar[i]);
                sumn=sumn+ar[i];
            }

            else
            {
                pos.push_back(ar[i]);
                sump=sump+ar[i];
            }

        }
        cout<<sump-sumn<<endl;

    }

}
