#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int a[] ,int n)
{
    a[0] = 50;
    // for(int i = 0; i<n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    // printf("\n");
}
int main()
{
    int a[5] = {20,30,40,50,60};
    fun(a,5);
    for(int i = 0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}