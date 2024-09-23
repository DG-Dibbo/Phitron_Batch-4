#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k = n;
    for(int i = n; i>0; i--)
    {
        for(int j = k; j>0; j--)
        {
           printf("*");
        }
        k--;
        printf("\n");
    }
    
    return 0;
}