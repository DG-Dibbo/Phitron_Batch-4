#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(x>='a' && x<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if(x>='0' && x<='9')
    {
        printf("IS DIGIT");
    }
    return 0;
}