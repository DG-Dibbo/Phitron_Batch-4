#include <stdio.h>
int main()
{
    char a[6] = "Dibbo";
    int sz = sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s\n",a);
    return 0;
}