#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int x = 50;
    int *ptr = &x;
    int *ptr2 = ptr;
    *ptr = 500;
    *ptr2 = 400;
    printf("1--%p\n",x);
    printf("2--%p\n",ptr);
    printf("3--%p\n",&x);
    // printf("4--%p\n",*ptr);
    printf("5--%p\n",&ptr);
    printf("6--%d\n",&x);
    printf("7--%d\n",ptr);
    printf("8--%d\n",*ptr);
    printf("9--%d\n",&ptr);
    printf("10--%d\n",x);
    printf("11--%d\n",ptr);
    return 0;
}