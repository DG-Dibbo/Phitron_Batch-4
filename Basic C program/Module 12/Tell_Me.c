#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int test;
    scanf("%d",&test);
    while (test>0)
    {
        int n,m;
        scanf("%d",&n);
        int a[n];
        for(int i =0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        int find = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] == m)
            {
                find = 1;
                break;
            }
        }
        if(find == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        test--;
    }
    
    return 0;
}
