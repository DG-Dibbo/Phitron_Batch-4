#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    int len = strlen(s);
    int cnt[26] = {0};
    for(int i = 0; i<len; i++)
    {
        int val = s[i]-97;
        cnt[val]++;
    }
    for(int i = 0; i<26; i++)
    {
        if(cnt[i]>0)
        printf("%c - %d\n",i+97,cnt[i]);
    }
    return 0;
}