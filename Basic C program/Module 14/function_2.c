#include <stdio.h>
#include<string.h>
#include<limits.h>
int sum(void)//return + no parameter
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s = a+b;
    return s;
}
int main()
{
    int s= sum();
    printf("%d",s);
    return 0;
}