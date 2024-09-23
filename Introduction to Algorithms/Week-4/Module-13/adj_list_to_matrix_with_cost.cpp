#include <bits/stdc++.h>
using namespace std;
void convert(int n,vector<pair<int,int>> v[])
{
    int mat[n][n];
    memset(mat,-1,sizeof(mat));
    for(int i = 0; i<n; i++)
    {
        for(pair<int,int> child : v[i])
        {   
            mat[i][child.first] = child.second;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> v[n];
    while (e--)
    {
        /* code */
        int a, b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        // v[b].push_back({a,c});
    }
    convert(n,v);
    return 0;
}