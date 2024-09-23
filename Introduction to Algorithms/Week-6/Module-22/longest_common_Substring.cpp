#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    int n,m;
    n = a.size();
    m = b.size();
    int dp[n+1][m+1];
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=m; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    // maximum same latter koyta ase
    int mx1 = 0;
    for(int i = 0; i<=n; i++)
    {
        for(int j= 0; j<=m; j++)
        {
            if(dp[i][j] > mx1)
            {
                mx1 =max(mx1,dp[i][j]);
            }
        }
    }
    cout <<"Maximum same latter is ->"<<" " <<  mx1 << endl;
    int mx2 = 0;   
    int ci,cj;
    for(int i = 0; i<=n; i++)
    {
        for(int j= 0; j<=m; j++)
        {
            if(dp[i][j] > mx2)
            {
                mx2 = dp[i][j];
                ci = i;
                cj = j;
            }
        }
    }
    string ans;  
    while (ci != 0 && cj != 0)
    {
        /* code */
         if(a[ci-1] == b[cj-1])
            {
                ans+= a[ci-1];
                ci--;
                cj--;
            }
            else
            {
                break;
            }
    }
    
    reverse(ans.begin(),ans.end());
    cout <<"Same latter is ->"<<" "<< ans << endl;
    return 0;
}