#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int small(void)
{
    char c;
    scanf("%c",&c);
    int sum;
    if(c >= 'a' && c <= 'z')
    {
        sum = c-32;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        sum = c+32;
    }
    return sum;
}
int main()
{
    int s = small();
    printf("%c",s);
    return 0;
}