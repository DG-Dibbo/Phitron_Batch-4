#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 20;
int maze[N][N];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool vis[N][N];
bool valid(int x, int y)
{
    return !vis[x][y] && maze[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        /* code */
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
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
            {
                maze[i][j] = -1;
            }
            if (s[j] == 'A')
                src = {i, j};
            if (s[j] == 'B')
                des = {i, j};
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(src);
    if (vis[des.first][des.second] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}