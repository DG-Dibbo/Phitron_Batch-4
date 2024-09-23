#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void small(int c)
{
    int sum;
    if(c >= 'a' && c <= 'z')
    {
        sum = c-32;
    }
    else
    {
        sum = c+32;
    }
    printf("%c",sum);
    
}
int main()
{
    char c;
    scanf("%c",&c);
    small(c);
    return 0;
}