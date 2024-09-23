#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >>q;
    queue<string> ticket_counter;
    while (q--)
    {
        int n;
        cin >> n;
        if(n == 0)
        {
            string s;
            cin >>s;
            ticket_counter.push(s);
        }
        else if(n == 1)
        {
            if(!ticket_counter.empty())
            {
                cout <<ticket_counter.front()<<endl;
                ticket_counter.pop();
            }
            else
            {
                cout <<"Invalid"<<endl;
            }
        }
    }
    
    return 0;
}