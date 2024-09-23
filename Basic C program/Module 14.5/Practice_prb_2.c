#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n,s,t;
    scanf("%d",&n);
    s = 1;
    t = (2*n)-1;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=s; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= t; k++)
        {
            printf("*");
        }
        s++;
        t -= 2;
        printf("\n");
    }
    return 0;
}