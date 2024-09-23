#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
//global function ata code er sob jaygay declar hbe .
int x = 100;
void fun(void)
{
    // int x= 100;
    printf("Fun er address of memory: %p\n",&x);
}
int main()
{
    printf("Main er address of memory: %p\n",&x);
    fun();
    return 0;
}