#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while (t--)
    {
    long long int M,a,b,c;
    scanf("%lld %lld %lld %lld",&M,&a,&b,&c);
    long long int x;
    x = a*b*c;
    if(M == 0)
    {
        printf("0\n");
    }
    else if (M%x == 0)
    {
        printf("%lld\n",M/x);
    }
    else
    {
        printf("-1\n");
    }

    }
    return 0;
}