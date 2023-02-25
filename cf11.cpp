#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
            sum+=4;
        else if(s[i]=="Cube")
            sum+=3;
        else if(s[i]=="Octahedron")
            sum+=8;
        else if(s[i]=="Dodecahedron")
            sum+=12;
        else if(s[i]=="Icosahedron")
            sum+=20;
    }
    cout<<sum<<endl;
}
