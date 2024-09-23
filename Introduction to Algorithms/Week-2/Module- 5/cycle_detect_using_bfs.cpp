#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector <int> adj[N];
int parentaray[N];
bool flg = false;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        // cout << par << endl;
        q.pop();
        for(int child : adj[par])
        {
            if(vis[child] && parentaray[par] != child)
            {
                flg = true;
            }
            if(!vis[child])
            {
                q.push(child);
                parentaray[child] = par;
                vis[child] = true;
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
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parentaray,-1,sizeof(parentaray));
    for(int i = 0; i<n; i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    if(flg)
    {
        cout << "Cycle found" << endl;
    }
    else
    {
        cout << "Cycle Not Found" << endl;
    }
    return 0;
}