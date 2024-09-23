#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int sum(char *s)
{
     int count = 0;
    for(int i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
   return count;
}
int main()
{
    char s[100];
    scanf("%s",s);
   
   int p = sum(s);
    printf("%d\n",p);
    return 0;
}