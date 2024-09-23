#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int small_to_capital(char c) {
    int sum;
    if (c >= 'a' && c <= 'z') {
        sum= c - 32; // 'a' (97) - 'A' (65) = 32
    } else if(c >='A' && c<= 'Z')
    {
         sum =c+32;
    }
    return sum; 
}

int main() 
{
    char b;
    scanf(" %c", &b);
    int s = small_to_capital(b);
    printf("%c\n",s);
    
    return 0;
}
