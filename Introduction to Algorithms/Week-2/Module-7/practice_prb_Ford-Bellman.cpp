#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u;
    int v;
    int c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;
    while (e--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        Edgelist.push_back(Edge(a, b, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : Edgelist)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(dis[i] == INT_MAX)
        {
            dis[i] = 30000;
        }
        cout << dis[i] << " ";
    }
    return 0;
}