#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a ; 
    if(a >= '0' && a <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else if( a >='A' && a<= 'Z')
    {
        cout << "ALPHA" << endl << "IS CAPITAL" <<endl;
    }
    else
    {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    return 0;
}