#include <stdio.h>
#include<string.h>
#include<limits.h>
void sum(int x,int y)//no retrun + parameter
{
   int s = x+y;
   printf("%d",s);
    
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    
    return 0;
}