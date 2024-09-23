#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1005;
int n, m;
char c[N][N];
bool vis[N][N];
pi parent[N][N];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && c[ci][cj] != '#')
        return true;
    else
        return false;
}
void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, des});
    vis[src][des] = true;
    while (!q.empty())
    {
        /* code */
        auto par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = x + v[i].first;
            int cj = y + v[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {x, y};
            }
        }
    }
}
// vector<pi> p[N][N];
void path_assign(int di, int dj)
{
    while (parent[di][dj].first != -1 && parent[di][dj].second != -1)
    {
        int x = parent[di][dj].first;
        int y = parent[di][dj].second;
        di = x;
        dj = y;
        if (c[di][dj] != 'R' && c[di][dj] != 'D')
        {
            c[di][dj] = 'X';
        }
    }
}
int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (c[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);
    path_assign(di, dj);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}