#include <stdio.h>
#include<string.h>
#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = n-1;
    int k = 1;
    for(int i = 1; i<=n; i++)
    {
       for(int j =1; j<=s; j++)
       {
            printf(" ");
       }
       for(int j = 1; j<=k; j++)
       {
            printf("*");
       }
       s--;
       k+=2;
       printf("\n");
    }
    s = 0;
    k = (2*n)-1;
     for(int i = n; i>0; i--)
    {
       for(int j =1; j<=s; j++)
       {
            printf(" ");
       }
       for(int j = k; j>0; j--)
       {
            printf("*");
       }
       s++;
       k-=2;
       printf("\n");
    }
    return 0;
}