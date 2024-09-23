#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = n-1;
    int m = 1;;
    for(int i = 1; i<=n; i++)
    {
        for(int j = s; j>0; j--)
        {
            printf(" ");
        }
        for(int k = 1; k<=m; k++)
        {
            printf("*");
        }
        s--;
        m++;
        printf("\n");
    }
    return 0;
}