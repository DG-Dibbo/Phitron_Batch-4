#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min = INT_MAX;
    int pos;
    for(int i=1;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
            pos = i;
        }
    }
    printf("%d %d",min,pos);
    return 0;
}