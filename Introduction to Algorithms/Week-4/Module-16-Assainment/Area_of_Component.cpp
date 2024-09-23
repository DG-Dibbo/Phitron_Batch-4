#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1005;
char c[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i >= 0 || i < n || j >= 0 || j < m )
        return true;
    return false;
}
int bfs(int si, int sj)
{
    queue<pair<int, int>> q;   
    q.push({si, sj});
    vis[si][sj] = true;
    int cnt = 1;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false && c[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                cnt++;
            }
        }
    }
    return cnt;
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
    memset(vis,false,sizeof(vis));
    int min_area = -1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            
            if(!vis[i][j] && c[i][j] == '.')
            {
                int cnt =  bfs(i,j);
                if(min_area == -1)
                {
                    min_area = cnt;
                }
                else
                {
                    min_area = min(min_area,cnt);
                }
            }
        }
    }
    cout << min_area << endl;
    return 0;
}