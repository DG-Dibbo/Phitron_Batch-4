#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector <int> v[N];
bool vis[N];
void bfs_travarsel(int src,int des)
{
    queue <int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        // cout << par << endl;
        q.pop();
        for(auto child : v[par])
        {
            if(!vis[child])
            {
                q.push(child);
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
        v[a].push_back(b);
    }
    int q;
    cin >> q;
    memset(vis,false,sizeof(vis));
    while (q--)
    {
        /* code */
        int A,B;
        cin >> A >> B;
        bool flag = false;
        for(int child : v[A])
        {
            if(child== B)
            {
                flag = true;
            }
        }
        if(flag == true || A == B)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}