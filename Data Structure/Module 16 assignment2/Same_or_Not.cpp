#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n>>m;
    stack <int> st;
    queue <int> q;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0; i<m; i++)
    {
        int y; 
        cin >>y;
        q.push(y);
    }
    while (!st.empty() && !q.empty())
    {
        if(st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            break;
        }
    }
    if(st.empty() && q.empty())
    {
        cout<<"YES" <<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    
    return 0;
}