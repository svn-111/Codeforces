#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s={1,2,3,4};
    s.insert(5);
    s.insert(6);
    s.insert(7);
    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++) cout<<*it<<endl;
    set<int>s1;
    s1=s;
    //for(it=s1.begin();it!=s1.end();it++)
      //  cout<<*it<<endl;
    s.clear();
    cout<<s1.count(3)<<endl;

    cout<<*s1.begin()<<endl;
    cout<<endl;
    cout<<*(--s1.end())<<endl;

    s1.erase(s1.begin());
    s1.erase(--s1.end());
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<endl;

    set<pair<int,int>>s2;
    s2.insert({1,2});
    s2.insert({3,4});
    s2.insert({5,6});
    s2.insert({7,2});
    s2.insert({3,8});
    s2.insert({5,6});

    set<pair<int,int>>::iterator its;

    for(its=s2.begin();its!=s2.end();its++)
        cout<<its->first<<" "<<its->second<<endl;

}
