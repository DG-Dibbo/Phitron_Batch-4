#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf(" %d ",&a[i]);
    }
   int cnt[101] = {0};
   for(int i = 0; i<n;i++)
   {
     cnt[a[i]]++;
   }
   int x;
   scanf("%d",&x);
   for(int i = 0; i<=x; i++)
   {
      printf("%d - %d\n",i,cnt[i]);
   }

    return 0;
}