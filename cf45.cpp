#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>operations(n);
        for(int i=0;i<n;i++)
            cin>>operations[i];
        stack<int>st;
        for(auto u : operations)
        {
            if(u.size()>1)
            {
                st.push(stoi(u));
                cout<<st.top()<<endl;
            }
            else
            {
                if(isdigit(u[0]))
                {
                    //cout<<"isdigitcheck="<<u[0]<<endl;
                    st.push(u[0]-'0');
                    cout<<st.top()<<endl;
                }
                else if(u[0]=='+')
                {
                    int a1=-1,a2=-1;
                    if(!st.empty())
                    {
                        //int a1=-1,a2=-1;
                        a2=st.top();
                        st.pop();
                    }
                    if(!st.empty())
                    {
                        //int a1=-1,a2=-1;
                        a1=st.top();
                        st.pop();
                    }
                    if(a2!=-1)
                    {
                        st.push(a1);
                        //cout<<st.top()<<endl;
                        st.push(a2);
                        //cout<<st.top()<<endl;
                        st.push(a1+a2);
                        //cout<<st.top()<<endl;
                    }
                    else if(a1!=-1)
                    {
                        st.push(a1);
                        cout<<st.top()<<endl;
                    }


                }
                else if(u[0]=='D')
                {
                    if(!st.empty())
                    {
                        st.push(2*st.top());
                        cout<<st.top()<<endl;
                    }

                }
                else
                {
                    if(!st.empty())
                    {
                        st.pop();
                        cout<<st.top()<<endl;
                    }

                }
            }
        }
        long long int sum=0;
        while(!st.empty())
        {
            cout<<st.top()<<"   ";
            sum=sum+st.top();
            st.pop();
        }
        cout<<"sum="<<sum<<endl;
    }
}

