#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int n)
{
    if(n ==1)
    {
        printf("1");
    }
    else
    {
        printf("%d ",n);
        fun(n-1);
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
