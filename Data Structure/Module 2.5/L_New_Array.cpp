#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    vector <int> v1(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i];
    }
    v1.insert(v1.end(),v.begin(),v.end());
    for(int val : v1)
    {
        cout << val << " ";
    }
    return 0;
}