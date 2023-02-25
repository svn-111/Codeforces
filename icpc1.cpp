#include<bits/stdc++.h>
#define ll    long long int
using namespace std;
int main()
{
    ll a,b,c,d,e,m,n,mn,mx,avg,sum,cnt,x,y,z;
    cin>>a>>b>>c>>x;

    int g[9];
    g[0] = a;
    g[1] = b;
    g[2] = c;

    bool safe[3] = {true, true, true};

    sum = a+b+c;
    avg = sum/3;

    for(int i=0; i<3 ; i++)
    {
        if(sum % 3 != 0)
        {
            safe[0] = false;
            cout<<"1-- "<<safe[0]<<" "<<safe[1]<<" "<<safe[2];
            break;
        }
        if(g[i] < avg)
        {
            g[i] = avg - g[i];
            if(g[i] % x != 0)
            {
                safe[i] = false;
                cout<<"3-- "<<safe[0]<<" "<<safe[1]<<" "<<safe[2];
                break;
            }
        }
        if(g[i] > avg)
        {
            g[i] = g[i] - avg;
            if(g[i] % x != 0)
            {
                safe[i] = false;
                cout<<"2-- "<<safe[0]<<" "<<safe[1]<<" "<<safe[2];
                break;
            }
        }
    }
    if(safe[0] == true && safe[1]==true && safe[2] == true)
    {
        cout<<"Pos"<<endl;
    }
    else
        cout<<"N Pos"<<endl;


}
