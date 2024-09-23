#include <stdio.h>
#include<string.h>
#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 1;
    int k = (2*n)-1;
     for(int i = n; i>0; i--)
    {
       for(int j =2; j<=s; j++)
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
