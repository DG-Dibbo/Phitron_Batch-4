#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<pair<int, int>> v[N];
int pathDis[N];
class cmp 
{
    public:
        bool operator()(pair<int,int> a,pair<int,int> b)
        {
            return a.second > b.second ;
        }
};
void dijkstra(int src)
{
    // queue<pair<int, int>> q;
    priority_queue <pair<int,int>,vector<pair<int,int>>,cmp> pq;

    pq.push({src, 0});
    pathDis[src] = 0;
    while (!pq.empty())
    {
        /* code */
        pair<int, int> par = pq.top();
        int node = par.first;
        int cost = par.second;
        pq.pop();
        // for(int i = 0; i<v[node].size(); i++)
        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < pathDis[childNode])
            {
                //path relax;
                pathDis[childNode] = cost + childCost;
                pq.push({childNode, pathDis[childNode]});
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
    // priority_queue <pair<int,int>,vector<pair<int,int>>,cmp> pq;
    // pq.push({0,10});
    // pq.push({1,9});
    // pq.push({2,6});
    // pq.push({3,5});
    // pq.push({4,3});
    // while (!pq.empty())
    // {
    //     /* code */
    //     cout << pq.top().first << " " << pq.top().second <<endl;
    //     pq.pop();
    // }
    
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << pathDis[i] <<endl;
    }

    return 0;
}