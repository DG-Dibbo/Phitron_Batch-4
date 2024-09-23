#include <stdio.h>
int main()
{
    char a[100];
    //  fgets(a,13,stdin);
    gets(a);
    // a[11] = '\0';
    
    printf("%s",a);
    return 0;
}