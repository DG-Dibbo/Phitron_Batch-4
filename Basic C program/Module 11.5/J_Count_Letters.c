#include <stdio.h>
#include<string.h>
int main()
{
    char c;
    int crt[26] = {0};
    while ((scanf("%c",&c)) != EOF)
    {
        crt[c-'a']++;
    }
    for(char i = 'a'; i<='z';i++)
    {
        if(crt[i-'a']>0)
        {
            printf("%c : %d\n",i,crt[i-'a']);
        }
    }
    
    return 0;
}