#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k = n;
    for(int i = n; i > 0; i--)
    {
        for(int j = 1; j<=k; j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}