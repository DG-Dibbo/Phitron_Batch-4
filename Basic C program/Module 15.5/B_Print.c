#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void sum(int a)
{
     for(int i = 1; i<=a; i++)
    {
        printf("%d",i);
        if(i != a)
        {
            printf(" ");
        }
    }
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
     sum(n);
   
    return 0;
}