#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 55.26;
    printf("%0.2lf\n",x);
    printf("%0.2lf",*ptr);
    
    return 0;
}