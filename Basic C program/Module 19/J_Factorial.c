#include <stdio.h>
long long int fun(long long int n)
{
    if(n == 0)
    {
        return 1;
    }
    long long int mul = fun(n-1);
    
    return mul * n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    
    printf("%lld",fun(n));  
    return 0;
}