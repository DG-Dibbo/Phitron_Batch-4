#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        /* code */
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }
    cout << "Before" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << i << " " << k << " " << j << endl;
            if (i == j)
            {
                adj[i][j] = 0;
            }
            if (adj[i][j] == INT_MAX)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "after" << endl;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "Cycle detected" << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << i << " " << k << " " << j << endl;
            if (adj[i][j] == INT_MAX)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// const ll N = 1e18;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1 ][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        /* code */
        ll a, b, c;
        cin >> a >> b >> c;
        if(c < adj[a][b])
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
    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int src, des;
        cin >> src >> des;
        if (adj[src][des] == INT_MAX)
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