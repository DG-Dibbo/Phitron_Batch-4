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
    int count = 0;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int child : v[par])
        {
            if(vis[child]==false)
            {
                // q.push(child);
                count++;
                // cout << child<<endl;
                vis[child] = true;
                level[child] = level[par]+1;
            }
        }
    }
    cout << count<<endl;
    
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
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(src);
    
    return 0;
}