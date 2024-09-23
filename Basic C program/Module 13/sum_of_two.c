#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }
    int x,sum;
    scanf("%d",&x);
    int find = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
           sum = a[i]+a[j];
           if(sum == x)
           {
                find = 1;
                break;
           }
        }
    }
    if(find==1)
    {
        printf("Yes,We found");
    }
    else
    {
        printf("No.We no found.");
    }
    return 0;
}