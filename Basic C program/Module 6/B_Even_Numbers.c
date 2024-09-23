#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1\n");
    }
    else
    {
    for(int i=2;i<=n;i=i+2)
       {
      
        printf("%d\n",i);  
      }
    }
    return 0;
}