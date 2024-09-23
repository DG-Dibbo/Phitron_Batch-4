#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int even,odd;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
           even = ar[i];
           printf("Even-%d\n",even);
           
        }
        else
        {
            odd = ar[i];
            printf("Odd-%d\n",odd);
            continue;
        }
    }
    
    return 0;
}