#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(n<2 && 1000<n)
    {
        break;
    }
    }
    
    int min = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    int mn = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == min)
        {
            mn++;
        }
    }
    if(mn%2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}