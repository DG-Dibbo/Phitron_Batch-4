#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int bfs(int src)
{
    int count = 0;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        /* code */
        count++;
        int par = q.front();
        // cout << par << endl;
        q.pop();
        for (auto child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
    return count;
}
int cnt = 0;
void dfs(int src)
{
    cnt++;
    vis[src] = true;
    for (auto child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child);
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
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt = 0;
            if(cnt >1)
            {
            cnt++;
            }
        }
    }
    cout << cnt << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (!vis[i])
    //     {
    //         bfs(i);
    //         count++;
    //     }
    // }
    // cout << count << endl;
    return 0;
}