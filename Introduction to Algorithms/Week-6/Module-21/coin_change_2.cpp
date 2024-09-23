#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int sum;
    cin >> sum;
    int dp[n + 1][sum + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = INT_MAX - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (weight[i - 1] <= j)
            {
                dp[i][j] = min(1 + dp[i][j - weight[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[n][sum] == INT_MAX - 1)
        cout << "Not Possible" << endl;
    else
        cout <<dp[n][sum] << endl;
    return 0;
}