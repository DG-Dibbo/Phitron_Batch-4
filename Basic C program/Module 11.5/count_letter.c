#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int len = strlen(a);
    char crt[26] = {0};
    for(int i =0; i<len; i++)
    {
        int val = a[i] - 'a';
        crt[val]++;
    }
    for(int i = 0; i<26; i++)
    {
         if(crt[i] != 0)
            printf("%c : %d\n",i+97,crt[i]); 
    }
    return 0;
}