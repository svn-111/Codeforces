#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>odd;
        vector<int>even;
        for(int i=1; i<=k; i++)
        {
            if(i!=x)
            {
                if(i%2==0)
                    even.push_back(i);
                else
                    odd.push_back(i);
            }
        }
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1; i<=n; i++)
                cout<<"1"<<" ";
            cout<<endl;
        }
        else
        {

            if(n%2==0)
            {
                if(even.size()!=0)
                {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                        cout<<"2"<<" ";
                    cout<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                if(k>=3)
                {
                    cout<<"YES"<<endl;
                    if(n%3==0)
                    {
                        cout<<(n/3)<<endl;
                        for(int i=0; i<n/3; i++)
                            cout<<"3"<<" ";
                        cout<<endl;
                    }
                    else
                    {
                        cout<<(n/3)+1<<endl;
                        for(int i=0; i<n/3; i++)
                            cout<<"3"<<" ";
                        cout<<"2"<<endl;
                    }


                }
                else
                    cout<<"NO"<<endl;

            }
        }


    }
}
