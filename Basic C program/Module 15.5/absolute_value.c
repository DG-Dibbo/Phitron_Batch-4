#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int my_abs(int x)
{
    int  sum = abs(x);
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    int s = my_abs(a);
    printf("%d\n",s);
    return 0;
}