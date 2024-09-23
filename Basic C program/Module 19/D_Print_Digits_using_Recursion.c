#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
void fun(int n)
{
    //base case
    if(n == 0) return;
    int x = n%10;
    fun(n/10);
    printf("%d ",x);
    
}
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 1; i<=t; i++)
    {
        scanf("%d",&n);
        fun(n);
        if(n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}