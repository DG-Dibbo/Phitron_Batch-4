#include <stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s\n%s",s,t);
    int count = strlen(s);
    int count1 = strlen(t);
    printf("%d %d\n",count,count1);
    printf("%s %s\n",s,t);
    return 0;
}