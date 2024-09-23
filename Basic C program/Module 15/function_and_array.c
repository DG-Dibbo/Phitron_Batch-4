#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int *a,int n)//function and array te kono value
//return kora jaay nh.
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[6] = {10,20,30,40,50,60};
    fun(a,6);
    return 0;
}