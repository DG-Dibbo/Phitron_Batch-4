#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
     int a[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // //exact row
    // int numrow;
    // scanf("%d",&numrow);
    
    // for(int i = 0; i<col; i++)
    // {
    //     printf("%d ",a[numrow][i]);    
    // }
    //exact column
    int numcol;
    scanf("%d",&numcol);
    for(int i = 0; i<row; i++)
    {
        printf("%d\n",a[i][numcol]);
    }
    
    return 0;
}