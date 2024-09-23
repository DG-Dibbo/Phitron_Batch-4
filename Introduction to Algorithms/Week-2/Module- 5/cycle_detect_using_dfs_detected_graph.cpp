#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector <int> adj[N];
int pathVis[N];
bool flg = false;
void dfs( int parent)
{
    // cout << parent << endl;
    vis[parent] = true;
    pathVis[parent] = true;
    for(int child : adj[parent])
    {
        if(pathVis[child])
        {
            flg = true;
        }
        if(!vis[child])
        {
            dfs(child);
            vis[child] = true;
        }
    }
    pathVis[parent] = false;
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
        // adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(pathVis,false,sizeof(pathVis));
    for(int i = 0; i<n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(flg)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "Cycle Not Detected" << endl;
    }
    return 0;
}