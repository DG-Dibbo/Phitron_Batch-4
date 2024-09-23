#include <stdio.h>
int main()
{
    int a,sum=0,i;
    scanf("%d",&a);
    if(a>=0)
    {
        for( i=0;i<=a;i=i+1)
        {
            sum=sum+i;   
           
        } 
           printf("%d\n",sum);     
    }
    else
    {
        printf("The value is negative");
    }
    return 0;
}