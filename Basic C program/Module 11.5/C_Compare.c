#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char X[21],Y[21];
    scanf("%s\n%s",X,Y);
    int val= strcmp(X,Y);
    if(val < 0 )
    {
        printf("%s\n",X);
    }
    else if(val > 0 )
    {
        printf("%s\n",Y);
    }
    else
    {
        printf("%s",X);
    }
    
    return 0;
}