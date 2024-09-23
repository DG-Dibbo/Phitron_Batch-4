#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void odd_even(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int even = 0,odd = 0;
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0; i<n; i++)
    {
        if(a[i] %2 == 0)
        {
            even++;
        }
        else if(a[i]%2 == 1)
        {
            odd++;
        }
        else
        {
            printf("0");
        }
    }
    printf("%d %d",even,odd);
}
int main()
{
    odd_even();
    
    return 0;
}