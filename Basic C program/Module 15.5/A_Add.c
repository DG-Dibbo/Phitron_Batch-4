#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int add(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s = add(x,y);
    printf("%d",s);
    return 0;
}