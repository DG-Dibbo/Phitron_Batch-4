#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int pri = 0,sec = 0;
    for(int i =0; i<n; i++)
    {
        pri += a[i][i];
        sec += a[i][n-1-i];
    }
    int absolute = abs(pri-sec);
    printf("%d",absolute);
    return 0;
}