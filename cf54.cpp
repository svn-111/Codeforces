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
            ll n;
            cin>>n;
            if(n==1) cout<<1<<endl;
            else if(n==2) cout<<"2 1"<<endl;
            else {
                vector<ll>ans(n+10,0);
                ans[0]=2;
                ans[n-1]=3;
                ans[n/2]=1;
                for(ll i=1,start=4;i<n;i++){
                    if(!ans[i]){
                        ans[i]=start;
                    }
                }
                for(ll i=0;i<n;i++) cout<<ans[i]<<"";
                cout<<endl;
            }
		}

}
