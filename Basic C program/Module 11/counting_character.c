#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26] = {0};
    for(int i = 0; i<strlen(s); i++)
    {
        int val = s[i]-97;
        cnt[val]++;
    }
    for(int i = 0; i< strlen(s) ; i++)
    {
          int val = s[i]-'a';
        //  printf("%c- %d\n",val+97,cnt[i]);
        if(cnt[val]!= 0)
        {
            printf("%c- %d\n",val+97,cnt[val]);
        }
        cnt[val] = 0;
    }
    return 0;
}