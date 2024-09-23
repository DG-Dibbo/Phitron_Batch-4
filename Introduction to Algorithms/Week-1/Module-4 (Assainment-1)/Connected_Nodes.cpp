#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    vector<int> v[10005];
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int x;
        cin >> x;
        vector <int> p;
        if(v[x].size() > 0)
        {
            for(int child : v[x])
            {
                p.push_back(child);
            }
            sort(p.begin(),p.end(),greater<int>());
            for(int val : p)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}