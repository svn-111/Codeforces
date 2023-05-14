#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), :: toupper);
    cout<<s<<endl;
}
