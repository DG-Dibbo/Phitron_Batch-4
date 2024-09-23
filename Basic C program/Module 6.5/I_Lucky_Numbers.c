#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int test,temp;
    test = n/10;
    temp = n %10;
    if(temp%test ==0 || test%temp==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}