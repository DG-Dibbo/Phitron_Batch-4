#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int diffence;
    cin >> diffence;
    int s2 = (diffence+s)%2;
    if (s2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int s1 = (diffence + s) / 2;
        int dp[n + 1][s1 + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout << dp[n][s1];
    }

    return 0;
}