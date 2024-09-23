#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p = (n+1)/2 +10;
    int q = (n+1)/2+5;
    int s = q-1;
    int k = 1;
    for(int i = 1; i<=p; i++)
    {
        for(int j = s; j>0; j--)
        {
            printf(" ");
        }
        for(int j = 1; j<= k; j++)
        {
            printf("*");
        }
        
        if(i<q)
        {
            s--;
            k+=2;
        }
        else
        {
            s = 5;
            k = n;
        }
        printf("\n");
    }
    return 0;
}