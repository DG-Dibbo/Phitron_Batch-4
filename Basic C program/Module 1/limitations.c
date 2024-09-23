#include <stdio.h>
int main()
{
    int a=1000000000;
    long long int b=100000000000;
    float c=22.12345678;
    double d=3.123456789123456;
    printf("%f\n",c);
    printf("d-%0.15lf\n",d);
    printf("%lld",b);
    return 0;
}