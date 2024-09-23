#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    int val;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myStack st1;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x1;
        cin >> x1;
        st1.push(x1);
    }
    int flag = 0;
    if (st.size() != st1.size())
    {
        flag = 0;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() == st1.top())
            {
                flag = 1;
                break;
            }
            st.pop();
            st1.pop();
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}