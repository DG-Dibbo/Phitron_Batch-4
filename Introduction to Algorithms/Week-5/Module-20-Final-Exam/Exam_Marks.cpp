#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
int dp[N][N];
bool knapsack(int n, int a[], int w)
{
    if (n == 0 )
    {
        if(w == 0)
            return true;
        else
            return false;
    }
    
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (a[n - 1] <= w)
    {
        bool op1 = knapsack(n - 1, a, w - a[n - 1]);
        bool op2 = knapsack(n - 1, a, w);
        return dp[n][w] = op1 || op2;
    }
    else
    {
        return dp[n][w] = knapsack(n - 1, a, w);
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int total_mark = 1000;
        if (total_mark == m)
        {
            cout << "YES" << endl;
        }
        else if (total_mark < m)
        {
            cout << "NO" << endl;
        }

        else
        {
            int min_m = total_mark - m;
            for(int i = 0; i<=n; i++)
            {
                for(int j = 0; j<= min_m; j++)
                {
                    dp[i][j] = -1;
                }
            }
            if (knapsack(n, a, min_m))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}