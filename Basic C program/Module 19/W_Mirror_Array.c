#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i = 0; i<row; i++)
    {
        for(int j = col-1; j>=0; j--)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}