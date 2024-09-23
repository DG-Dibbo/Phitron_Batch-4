#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int i)
{
    if(i==0) return;
    printf("%d\n",i);
     //eke 'base case' bole jeta diye recursion thamano hoy.
    
    fun(i-1);
}
int main()
{
    fun(5);
    return 0;
}