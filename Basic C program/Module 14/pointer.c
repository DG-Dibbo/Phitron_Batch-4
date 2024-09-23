#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int x= 10;
    int * p = &x;
    // printf("%p",p);
    //dereference x er value ke accress kore ishe mto value
    //change korte parbo.
    *p = 500;//dereference
    printf("%d",x);
    return 0;
}


