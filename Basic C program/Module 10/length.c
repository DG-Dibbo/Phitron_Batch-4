#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s\n%s",a,b);
    int count = strlen(a);
    int count1 = strlen(b);
    printf("%d %d",count,count1);
    return 0;
}