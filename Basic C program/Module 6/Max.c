#include <stdio.h>
#include<limits.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max=x;
        }     
    }
    printf("%d",max);
    return 0;
}