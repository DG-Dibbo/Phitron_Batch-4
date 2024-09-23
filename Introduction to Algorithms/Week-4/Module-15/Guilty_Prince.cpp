#include <bits/stdc++.h>
using namespace std;
char c[25][25];
bool vis[25][25];
int n, m;
int cnt;
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && c[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    int t;
    int cs = 1;
    cin >> t;
    while (t--)
    {
        int si, sj;
        cin >> m >> n; 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
                if (c[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        cnt = 0;
        dfs(si, sj);
        cout << "Case " << cs++ << ": " << cnt << endl;
    }
    return 0;
}
