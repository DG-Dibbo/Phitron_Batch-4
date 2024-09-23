#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int, int>> v = {{-1, 2}, {1, 2}, 
{-1, -2}, {1, -2}, {-2, -1}, {-2, 1}, {2, -1}, {2, 1}};
bool vis[105][105];
int dis[105][105];
bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}
void bfs(int ki, int kj)
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;
    while (!q.empty())
    {
        /* code */
        pair<int, int> par = q.front();
        q.pop();
        int king1 = par.first;
        int king2 = par.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = king1 + v[i].first;
            int cj = king2 + v[i].second;
            if(valid(ci,cj) == true && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[king1][king2] +1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(ki, kj);
        cout << dis[qi][qj] << endl;
    }
    return 0;
}