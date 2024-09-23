#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    if(n == 0 && m == 0)
    {
        printf("0");
        return 0;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(x == a[i][j])
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}