#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
		{
            int n,cnt=0,x;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                cin>>x;
                if(x==i)
                    cnt++;
            }
            if(cnt==1)
                cout<<1<<endl;
            else if(cnt==0)
                cout<<0<<endl;
            else
                cout<<cnt-1<<endl;
		}

}
