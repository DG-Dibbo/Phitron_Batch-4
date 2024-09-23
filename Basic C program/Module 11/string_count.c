#include <stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int len = strlen(a);
    int k = len;
    int len1 = strlen(b);
    for(int i = 0;i<=len1;i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s %s",a,b);
    
    return 0;
}