#include <bits/stdc++.h>
using namespace std;
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
    bool dp[n+1][sum+1];
    dp[0][0] = true;
    for(int i = 1; i<=sum; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] =  dp[i - 1][j - a[i - 1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(int i = 0; i<=n; i++)
    // {
    //     for(int j = 0; j<sum; j++)
    //     {
    //         if(dp[i][j])
    //         {
    //             cout << "T" << " ";
    //         }
    //         else
    //         {
    //             cout << "F" << " ";
    //         }

    //     }
    //     cout << endl;
    // }
    if(dp[n][sum])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}