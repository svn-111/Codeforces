#include<bits/stdc++.h>
#define ll    long long int
using namespace std;

int main()
{
    int t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {


        ll e,m,n,mn,mx,avg,sum,cnt,x,y,z;
        ll g[3];
        for(int i=0; i<3; i++)
            cin>>g[i];
        cin>>x;

        bool safe[3] = {true, true, true};

        sum = g[0]+g[1]+g[2];
        avg = sum/3;

        for(int i=0; i<3 ; i++)
        {
            if(sum % 3 != 0)
            {
                safe[0] = false;
                break;
            }
            if(g[i] < avg)
            {
                g[i] = avg - g[i];
                if(g[i] % x != 0)
                {
                    safe[i] = false;
                    break;
                }
            }
            if(g[i] > avg)
            {
                g[i] = g[i] - avg;
                if(g[i] % x != 0)
                {
                    safe[i] = false;
                    break;
                }
            }
        }
        if(safe[0] == true && safe[1]==true && safe[2] == true)
        {
            cout<<"Case "<<j<<": "<<"Peaceful"<<endl;
        }
        else
            cout<<"Case "<<j<<": "<<"Fight"<<endl;

    }
}
