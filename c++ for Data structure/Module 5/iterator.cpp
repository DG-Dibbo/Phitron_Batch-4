#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; // Dibbo
    //string  :: iterator it;
    // for(int i = 0; i<s.size(); i++)
    // {
    //     cout << s[i] << endl;;
    // }
    for(auto it = s.begin(); it<s.end(); it++)
    {
        cout << *it << endl;
    }
    //cout << *s.begin() << endl; // D
    //cout << *(s.end()-1) << endl; // o
    return 0;
}