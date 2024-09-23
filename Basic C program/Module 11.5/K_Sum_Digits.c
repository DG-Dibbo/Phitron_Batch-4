#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int sum = 0;
    for(int i = 0; i<strlen(a); i++)
    {
        int digit = a[i] - '0';
        sum += digit;
    }
    printf("%d",sum);
    return 0;
}