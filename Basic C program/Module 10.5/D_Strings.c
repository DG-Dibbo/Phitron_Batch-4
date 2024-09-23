#include <stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n%s",a,b);
    int len = strlen(a);
    int len1 = strlen(b);
    int sum = len+len1;
    printf("%d %d\n",len,len1);
    printf("%s%s\n",a,b);
    
    int temp;
    
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
    
    printf("%s %s",a,b);
    return 0;
}