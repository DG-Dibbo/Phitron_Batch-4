#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int fun(int a[],int n)
{
    if(n == 0) return 0;
    fun(a,n-1);
    printf("%d ",a[n-1]);
    //return fun(n-1)+n;
    
}
int main()
{
    int a[3] = {1,2,3};
    fun(a,3);
    // int n;
    // scanf("%d",&n);
    //printf("%d",fun(n));
    return 0;
}
