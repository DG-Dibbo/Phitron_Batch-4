#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void fun(int a[],int n, int i)
{
    if(i < n) 
    {
        if(i%2 == 0)
        {
            fun(a,n,i+2);
            printf("%d ",a[i]);   
        }
        
    }         
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n,0);
    
    return 0;
}
