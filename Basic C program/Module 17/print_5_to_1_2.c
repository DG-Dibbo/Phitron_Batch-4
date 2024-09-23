#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int i)
{
    if(i==6) return;//eke 'base case' bole jeta diye recursion thamano hoy. 
    fun(i+1);
    printf("%d\n",i);
     
   
}
int main()
{
    fun(1);
    return 0;
}