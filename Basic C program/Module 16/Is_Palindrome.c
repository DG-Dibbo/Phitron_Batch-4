#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int is_palindrome(char *a) 
{
    int length = strlen(a);

    for (int i = 0; i<length/2; i++) 
    {
        if (a[i] != a[length - i- 1]) 
        {
            return 0;
        }
    }
    return 1; 
}

int main() {
    char s[1001];
    scanf("%s", s);

    if (is_palindrome(s)) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
