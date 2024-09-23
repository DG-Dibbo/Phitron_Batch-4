#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector <int> v[N];
bool vis[N];
int cnt = 0;
void dfs(int src)
{
    queue <int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int child : v[par])
        {
            /* code */
            cnt++;
            if(!vis[child])
            {
                dfs(child);
            }
        }
        
    }
    
}
int main()
{
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int u,m;
        cin >> u >> m;
        v[u].push_back(m);
        v[m].push_back(u);
    }
    memset(vis,false,sizeof(vis));
    for(int i = 1; i<=n; i++)
    {
        if(!vis[i])
        {
         cnt = 0;
            dfs(i);
            if(cnt > 1)
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}