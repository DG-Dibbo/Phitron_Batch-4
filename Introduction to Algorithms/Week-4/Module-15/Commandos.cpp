#include <bits/stdc++.h>
using namespace std;
const int N = 110;
bool vis[N];
int dis_from_src[N];
int dis_from_des[N];
vector<int> v[N];

void bfs(int src, int track)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    if (track == 1)
    {
        dis_from_src[src] = 0;
    }
    else
    {
        dis_from_des[src] = 0;
    }
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                if (track == 1)
                {
                    vis[child] = true;
                    q.push(child);
                    dis_from_src[child] = dis_from_src[par] + 1;
                }
                else
                {
                    vis[child] = true;
                    q.push(child);
                    dis_from_des[child] = dis_from_des[par] + 1;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        /* code */
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
        int src, des;
        cin >> src >> des;

        for(int i = 0; i<n; i++)
        {
            vis[i] = false;
            dis_from_src[i] = -1;
        }
        // memset(vis, false, sizeof(vis));
        // memset(dis_from_src, -1, sizeof(dis_from_src));

        bfs(src, 1);
        // memset(vis, false, sizeof(vis));
        // memset(dis_from_des, -1, sizeof(dis_from_des));
        for(int i = 0; i<n; i++)
        {
            vis[i] = false;
            dis_from_des[i] = -1;
        }
        bfs(des, 2);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = dis_from_src[i] + dis_from_des[i];
            ans = max(ans, val);
        }
        cout << "Case" << " " << cs++ << ":" << " " << ans << endl;
        for(int i = 0; i<n; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}