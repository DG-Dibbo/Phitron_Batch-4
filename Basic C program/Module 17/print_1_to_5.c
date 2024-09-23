#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int i)
{
   
    printf("%d\n",i);
     if(i==5) return;//eke 'base case' bole jeta diye recursion thamano hoy.
    
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}