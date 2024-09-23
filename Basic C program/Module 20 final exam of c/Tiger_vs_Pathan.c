#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
    int n;
    scanf("%d",&n);
    char s[100001];
    scanf("%s",s);
    int tiger = 0;
    int pathan  = 0;
    for(int i = 0; i<strlen(s); i++)
    {
        if(s[i] == 'T')
        {
            tiger++;
        }
        else if(s[i] == 'P')
        {
            pathan++;
        }
    }
    if(tiger < pathan)
    {
        printf("Pathaan\n");
    }
    else if(tiger > pathan)
    {
        printf("Tiger\n");
    }
    else
    {
        printf("Draw\n");
    }
    } 
    
    return 0;
}