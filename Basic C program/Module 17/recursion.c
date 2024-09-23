#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun()
{
    printf("fun");
    fun();
}
int main()
{
    fun();
    return 0;
}