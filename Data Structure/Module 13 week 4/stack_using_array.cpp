#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
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
    int n;
    cin >>n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // if (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    //     cout << st.top() << endl;
    //     st.pop();
    //     cout << st.top() << endl;
    //     st.pop();
    //     cout<<st.top();
    //     // cout<<"stack empty";
    // }

    return 0;
}