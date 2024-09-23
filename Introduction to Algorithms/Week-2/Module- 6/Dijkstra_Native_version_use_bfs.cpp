#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<pair<int, int>> v[N];
int pathDis[N];
void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    pathDis[src] = 0;
    while (!q.empty())
    {
        /* code */
        pair<int, int> par = q.front();
        int node = par.first;
        int cost = par.second;
        q.pop();
        // for(int i = 0; i<v[node].size(); i++)
        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < pathDis[childNode])
            {
                //pathrelax;
                pathDis[childNode] = cost + childCost;
                q.push({childNode, pathDis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    // memset(pathDis, INT_MAX, sizeof(pathDis));
    for (int i = 0; i < n; i++)
    {
        pathDis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << pathDis[i] <<endl;
    }

    return 0;
}