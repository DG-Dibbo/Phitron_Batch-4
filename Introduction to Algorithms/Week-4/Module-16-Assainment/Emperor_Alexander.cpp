#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
const ll N = 1e5 + 5;
ll par[N];
ll group_size[N];

void dsu_initialize(ll n)
{
    for (ll i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
ll dsu_find(ll node)
{
    if (par[node] == -1)
        return node;
    ll leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    
    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgelist;
    while (e--)
    {
        /* code */
        ll u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(Edge(u, v, w));
    }
    sort(edgelist.begin(), edgelist.end(), cmp);
    ll total_cost = 0;
    int node = 0;
    ll road = 0;
    for (Edge ed : edgelist)
    {
        ll leaderU = dsu_find(ed.u);
        ll leaderv = dsu_find(ed.v);
        if (leaderU == leaderv)
        {
            road++;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            total_cost += ed.w;
            node++;
        }
    }
    if (node == n - 1)
        cout << road << " " << total_cost << endl;
    else
        cout << "Not Possible" << endl;
    return 0;
}