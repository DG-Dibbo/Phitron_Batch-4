#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int crt[100001] = {0};
    for(int i = 1; i<=n; i++)
    {
       int val = a[i];
       crt[a[i]]++;
    }
    for(int i = 1; i<=m; i++)
    {    
        printf("%d\n",crt[i]);   
    }
    return 0;
}