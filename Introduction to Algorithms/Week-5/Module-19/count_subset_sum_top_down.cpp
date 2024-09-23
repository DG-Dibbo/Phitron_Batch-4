#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int subset_sum(int n, int a[], int sum)
{
    if (n == 0)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][sum] != -1)
        return dp[n][sum];
    if (a[n - 1] <= sum)
    {
        int op1 = subset_sum(n - 1, a, sum - a[n - 1]);
        int op2 = subset_sum(n - 1, a, sum);
        return dp[n][sum] = op1 + op2;
    }
    else
    {
        return dp[n][sum] = subset_sum(n - 1, a, sum);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    memset(dp,-1,sizeof(dp));
    cout << subset_sum(n,a,sum);
    return 0;
}