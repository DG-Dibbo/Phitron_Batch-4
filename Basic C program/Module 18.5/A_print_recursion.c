#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int n)
{
    if(n == 0) return;
    printf("I love Recursion\n");
    fun(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        fun(n);
    }
    else
    {
        printf("0");
    }
    
    return 0;
}