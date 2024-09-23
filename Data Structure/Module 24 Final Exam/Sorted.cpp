#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        list <int> lt;
        for(int i =0; i<n; i++)
        {
            int x;
            cin >>x;
            lt.push_back(x);
        }
        lt.sort();
        lt.unique();
        for(int i : lt)
        {
            cout << i<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}