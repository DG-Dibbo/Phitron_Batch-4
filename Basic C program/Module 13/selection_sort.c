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
    //ascending sort.
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }     
    }
     printf("Ascending sort: ");
    for(int i = 0; i<n; i++)
    {
       
        printf("%d ",a[i]);
    }
    printf("\n");
    //decending sort
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }     
    }
    printf("Decending sort: ");
    for(int i = 0; i<n; i++)
    {
       
        printf("%d ",a[i]);
    }
    return 0;
}