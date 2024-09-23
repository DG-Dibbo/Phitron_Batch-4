#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}