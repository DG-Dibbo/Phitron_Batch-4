#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i =0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i : v)
    {
        if(i>0)
        {
            cout <<"1";
        }
        else if(i<0)
        {
            cout <<"2";
        }
        else
        {
            cout <<"0";
        }
        cout <<" ";
    }
    return 0;
}