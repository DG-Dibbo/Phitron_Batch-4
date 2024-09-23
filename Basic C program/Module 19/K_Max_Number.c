#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int fun(int a[],int n,int i)
{
    if(i == n)
    {
        return INT_MIN;
    }
    int mx = fun(a,n,i+1);
    if(a[i]>mx)
    {
        return a[i];
    }
    else
    {
        return mx;
    }

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
    int max = fun(a,n,0);
    printf("%d\n",max);
    return 0;
}