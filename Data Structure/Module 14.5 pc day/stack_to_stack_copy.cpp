#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    int n;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack <int> st1;
    while (!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
    while (!st1.empty())
    {
        cout << st1.top()<<" ";
        st1.pop();
    }
    

    
    return 0;
}