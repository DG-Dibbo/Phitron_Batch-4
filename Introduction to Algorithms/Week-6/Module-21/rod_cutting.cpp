#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int w, int val[], int weight[])
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int choice1 = val[n - 1] + unbounded_knapsack(n, w - weight[n - 1], val, weight);
        int choice2 = unbounded_knapsack(n - 1, w, val, weight);
        return dp[n][w] = max(choice1, choice2);
    }
    else
    {
        return dp[n][w] = unbounded_knapsack(n - 1, w, val, weight);
    }
}
int main()
{
    int n;
    cin >> n;
    int val[n],w[n];
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=n; j++)
        {
            dp[i][j] = -1;
        }
    }
    for(int i = 0; i<n; i++)
    {
        cin >> val[i];
        w[i] = i+1;
    }
    cout << unbounded_knapsack(n,n,val,w);
    return 0;
}