#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int int_reverse(int n, int c)
{
    //base case
    if(n == 0) return c;
    c = c * 10 + n % 10;
    return int_reverse(n/10,c);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",int_reverse(n,0));
    return 0;
}