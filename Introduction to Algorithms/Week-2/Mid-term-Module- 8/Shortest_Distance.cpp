#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e18;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
                adj[i][j] = N;
        }
    }
    while (e--)
    {
        /* code */
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < adj[a][b])
            adj[a][b] = c;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        /* code */
        ll src, des;
        cin >> src >> des;
        if (adj[src][des] == N)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << adj[src][des] << endl;
        }
    }
    return 0;
}