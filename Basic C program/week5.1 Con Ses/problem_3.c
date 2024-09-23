#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int linear_search(int i,int n,int *a,int v)
{
    if(i == n) return -1;
    if(a[i] == v)
    {
        return i;
    }
    return linear_search(i+1,n,a,v);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    for(int i = 0; i<q; i++)
    {
        int v;
        scanf("%d",&v);
        //searching
        int res = linear_search( 0,n,a,v);
        if(res ==-1)
        {
            printf("No found\n");
        }
        else
        {
            printf("%d\n",res);
        }
    }
    return 0;
}