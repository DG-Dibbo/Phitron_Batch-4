#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector <int> v(26);
    for(char c : s)
    {
        v[c-'a']++;
    }
    for(char i ='a'; i<='z'; i++)
    {
        if(v[i-'a']!= 0)
        {
            cout <<i <<" "<< ":" <<" " <<v[i-'a']<<endl;
        }
    }
    return 0;
}