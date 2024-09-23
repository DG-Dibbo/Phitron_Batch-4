#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            if(!pq.empty())
            {
                cout << pq.top()<<endl;
            }
            else
            {
                cout <<"Empty"<<endl;
            }
        }
        else if(c == 1)
        {
            if(!pq.empty())
            {
                cout << pq.top()<<endl;
            }
            else
            {
                cout <<"Empty"<<endl;
            }
        }
        else if(c == 2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(pq.empty())
            {
                cout <<"Empty"<<endl;
            }
            else
            {
                cout <<pq.top()<<endl;
            }
        }
    }
    
    return 0;
}