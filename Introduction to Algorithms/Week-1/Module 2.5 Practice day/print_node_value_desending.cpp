#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0);
    int l;
    cin >> l;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        if (l == level[i])
        {
            v1.push_back(i);
        }
    }
    sort(v1.begin(), v1.end(),greater<int>());
    for (int val : v1)
    {
        cout << val << " ";
    }
    return 0;
}