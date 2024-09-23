#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m = 1, l = n-1;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=l; j++)
        {
            printf(" ");
        }
        for(int k = 1; k<=m; k++)
        {
            printf("*");
        }
        l--;
        m += 2;
        printf("\n");
    }
    return 0;
}