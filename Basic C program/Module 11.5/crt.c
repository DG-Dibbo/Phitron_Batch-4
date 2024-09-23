#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[7] = {0};
    for(int i = 0; i<n; i++)
    {
        int val = a[i];
        b[val]++;
    }
   for(int i = 0; i<7; i++)
    {
        printf("%d - %d\n",i,b[i]);
    }
    return 0;
}