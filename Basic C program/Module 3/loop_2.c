#include <stdio.h>
int main()
{
    double i;
    for ( i = 0.1; i <= 10; i=i+0.1)
    {
        printf("%0.1f\n",i);
    }
    
    return 0;
}