#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> binary;
        for (char c : s)
        {
            if (!binary.empty())
            {
                if (c == '0')
                {
                    binary.push(c);
                }
                else
                {
                    if (binary.top() == '0')
                    {
                        binary.pop();
                    }
                }
            }
            else
            {
                binary.push(c);
            }
        }
        if (binary.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}