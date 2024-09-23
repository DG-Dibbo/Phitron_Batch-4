#include <stdio.h>
int main()
{
    char n,sum;
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        sum = n-32;
        printf("%c",sum);
    }
    else 
    {
        sum = n+32;
        printf("%c",sum);
    }
    return 0;
}