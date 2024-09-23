#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e5 + 5;
vector<pair<int, int>> v[N];
ll dis[N];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({src,0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll node = parent.first;
        ll cost = parent.second;
        for (pair<ll, ll> child : v[node])
        {
            ll childnode = child.first;
            ll childcost = child.second;

            if (cost + childcost < dis[childnode])
            {
                dis[childnode] = cost + childcost;
                pq.push({childnode,dis[childnode]});
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    ll src;
    cin >> src;
    dijkstra(src);

    ll t;
    cin >> t;
    while (t--)
    {
        ll d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}