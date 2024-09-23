#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int total = row*col;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count = 0,pn = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(a[i][j] == 0)
            {
                count++;
            }
            else
            {
                pn++;
            }
        }
    }
    if(total == count)
    {
        printf("Null matrix\n");
    }
    else
    {
        printf("Not num matrix\n");
    }
    printf("%d %d\n",count,pn);
    return 0;
}