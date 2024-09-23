#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int x)
{
    x = 200;
    printf("fun er value- %d\n",x);
}
int main()
{
    int x = 10;
    printf("main er address -%p\n",&x);
    fun(x);
    printf("Main fun er value - %d",x);
    return 0;
}