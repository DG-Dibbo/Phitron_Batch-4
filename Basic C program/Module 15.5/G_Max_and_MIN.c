#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void sum(int n)
{
     int a[n];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}