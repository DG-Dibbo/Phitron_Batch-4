#include <bits/stdc++.h>
using namespace std;
void reverse( queue<int> &q)
{
    if(q.empty()) 
    {
        return;
    }
    int x =q.front();
    q.pop();
    reverse(q);
    cout << x<<" ";
    
}
int main()
{
    queue<int> q;
    int n;
    cin >>n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    reverse(q);

    // stack <int> q1;
    // while (!q.empty())
    // {
    //     cout << q.front()<<" ";
    //     // q1.push(q.front());
    //     q.pop();
    // }
    // while (!q1.empty())
    // {
    //     cout << q1.top()<<" ";
    //     q1.pop();
    // }
    
    
    return 0;
}