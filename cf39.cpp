#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[3],sum=0,i;
    //cin>>a>>b>>c;
    for(i=0;i<3;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }

    //sort(ar,ar+3);
    long long int p=sum/3;
    if(p==ar[1])
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
}
