#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    int sum = a +b;
    int sub = a -b;
    int mul = a * b;
    if(sum == c || sub == c || mul == c)
    {
        cout << "Yes" << endl;
    }
    else 
    {
        if(s == '+')
        {
            cout << sum << endl;
        }
        else if ( s == '-')
        {
            cout << sub << endl;
        }
        else if(s == '*')
        {
            cout << mul << endl;
        }
    }
    return 0;
}