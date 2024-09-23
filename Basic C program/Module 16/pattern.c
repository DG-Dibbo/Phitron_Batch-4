#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main() 
{
    int n; 
    scanf("%d", &n);
    
    for(int i = 1; i <=n; i++) 
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
            for(int j = i; j > 0; j--) 
            {
                printf("%d", j);
            }
        printf("\n");
    }
    return 0;
}
