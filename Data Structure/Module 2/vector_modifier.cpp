#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={10,20,30};
    v.pop_back();
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] <<" ";//10,20;
    }
    // vector <int> v1={1,2,3};
    // v = v1;
    // for(int x: v)
    // {
    //     cout << x << " ";
    // }
    return 0;
}