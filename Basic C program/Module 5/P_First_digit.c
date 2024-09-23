#include <stdio.h>
int main()
{
    int  x,dvd;
    scanf("%d",&x);

    dvd=x/1000;
    if(dvd%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}