#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector <pair<int,int>> v[n];
    while (e--)
    {
        /* code */
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    for(int i = 0; i<n; i++)
    {
        cout << i << " -> " ;
        for(auto child : v[i])
        {
            cout << "{" << child.first << ", " 
            << child.second << "} ";
        }
        cout << endl;
    }
    return 0;
}