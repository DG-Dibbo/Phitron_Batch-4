#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge
{
public:
    ll u, v, c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const ll N = 1e5 + 5;
ll dis[N];

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;

    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Edgelist.push_back(Edge(a, b, c));
    }

    for (int i = 0; i <= n; i++)
    {
        dis[i] = 1e+18;
    }

    ll src;
    cin >> src;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge &ed : Edgelist)
        {
            ll u = ed.u, v = ed.v, c = ed.c;
            if (dis[u] < 1e+18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : Edgelist)
    {
        ll u = ed.u, v = ed.v, c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    ll t;
    cin >> t;

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int des;
            cin >> des;
            if (dis[des] == 1e+18)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[des] << endl;
            }
        }
    }

    return 0;
}
