#include <bits/stdc++.h>
using namespace std;
void print(stringstream& ss)//& sudu stringstream er jonno
{// & string a kaj kore.
    string word;
    if(ss >> word)
    {
        //print(ss);//reverse //output you love I
        cout << word << endl;
        print(ss);// I love you
    }
}
int main()
{
    string s;
    getline(cin,s);//I love you
    stringstream ss(s);
    print(ss);
    //ss << s;
    // string word;
    // while(ss >> word)
    // {
    //     cout << word << endl;
    // }
    return 0;
}