#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='z')
    {
      c='a';
    }
    else
    {
        c++;
    }
    printf("%c",c);
    return 0;
}