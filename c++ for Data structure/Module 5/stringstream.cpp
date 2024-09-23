#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s); //or 
    // stringstream ss; ss << s;
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cout << word << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}