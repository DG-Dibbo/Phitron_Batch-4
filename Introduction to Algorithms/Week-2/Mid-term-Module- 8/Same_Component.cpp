#include <bits/stdc++.h>
using namespace std;
const int N = 3005;
int n, m;
char c[N][N];
bool vis[N][N];
vector<pair<int, int>> dis = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + dis[i].first;
        int cj = sj + dis[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && c[ci][cj] != '-')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);
    if (vis[di][dj])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}