#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool flag;
int dp[N];
int knapsack(int curval, int val)
{
    if (curval == val)
    {
        flag = true;
        return curval;
    }
    if (curval < val)
    {
        return 0;
    }
    if(dp[val] != -1)
    {
        return dp[val];
    }
    dp[val] = knapsack(curval, val + 3);
    dp[val] = knapsack(curval, val * 2);

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        flag = false;
        memset(dp,-1,sizeof(dp));
        knapsack(n, 1);
        if(flag)
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