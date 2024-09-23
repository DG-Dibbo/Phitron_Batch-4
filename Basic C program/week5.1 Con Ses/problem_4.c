#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
// 1 1 2 3 5 8 13 21
// 1 2 3 4 5 6 7 8 
int fibonacci(int n)
{
    if(n<=2)
    return 1;
    return fibonacci(n-1) +fibonacci(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}