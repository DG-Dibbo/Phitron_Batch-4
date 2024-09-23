#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(char *d)
{
    printf("%d",strlen(d));
}
int main()
{
    char c[20] = "Hello";
    fun(c);
    return 0;
}