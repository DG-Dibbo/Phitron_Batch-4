#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1001][1001];
bool vis[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && a[x][y] != '#';
}
void bfs_locat(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        auto par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
            }
        }
    }
}
int main()
{
    pair<int, int> src, des;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                src = {i, j};
            }
            if (a[i][j] == 'B')
            {
                des = {i, j};
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs_locat(src);
    if (vis[des.first][des.second])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}