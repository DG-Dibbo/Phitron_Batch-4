#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a[4][4];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}