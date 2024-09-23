#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int m;
    cin >> m;
    for(int i =0; i<m; i++)
    {
        int x1;
        cin >> x1;
        q.push(x1);
    }
    int flag;
    if(st.size() != q.size())
    {
        flag = 0;
    }
    else
    {
        while (!st.empty() && !q.empty())
        {
            if(st.top() == q.front())
            {
                flag = 1;
                st.pop();
                q.pop();
                break;
            }
            else
            {
                flag = 0;
                break;
            }
        }

    }
    if(flag == 1)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}

