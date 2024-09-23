#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    if(n%2==0)
    {
        for(int i=n-1;i>0;i=i-2)
    {
        printf("%d ",ar[i]);
    }
    }
    else if(n%2==1)
     {
        for(int i=n-2;i>0;i=i-2)
        {
            printf("%d ",ar[i]);
        }
     }
    else
    {
        printf("0");
    }
    return 0;
}