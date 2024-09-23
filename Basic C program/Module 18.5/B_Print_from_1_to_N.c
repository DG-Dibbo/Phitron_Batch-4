#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int n,int i)
{
    printf("%d\n",i); 
    if(i == n) return;
    fun(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}