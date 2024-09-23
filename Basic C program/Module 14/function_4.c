#include <stdio.h>
#include<string.h>
#include<limits.h>
//no return + no parameter.
void sum(void)
{
    int x,y;
    
    scanf("%d %d",&x,&y);
    int s = x+y;
    printf("%d\n",s);
}
int main()
{
    sum();
    sum();
    sum();
    sum();
    return 0;
}