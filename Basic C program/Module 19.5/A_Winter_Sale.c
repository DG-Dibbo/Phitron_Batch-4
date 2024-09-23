#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float x,p;
    scanf("%f %f",&x,&p);
    float real_price =1 - (x/100.0);
    printf("%0.2f\n",p/real_price);
    return 0;
}