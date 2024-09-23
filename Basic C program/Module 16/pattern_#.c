#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = n-1;
    int k = 1;
    int m = 3;
    int f = (2*n)-1;
    
    for(int i = 1; i<=f; i++)
    {
        for(int j = 1; j<=s; j++)
        {
            printf(" ");
            
        }
        if(i%2==0)
        {
            for(int j = 1; j<=m; j++)
            {
                printf("-");
            }
            m +=4;
           
        }
        if(i%2==1)
        {
              for(int j = 1; j<=k; j++)
            {
            printf("#");
            }
            k+=4;
        }
        s--; 
        if(i >= n)
        {
            s+=2;
            m-=4;
            k -= 4;
        }
        printf("\n");
       
    }
    // int p = n-1;
    // int l = 1;
    // int o = 3;
    
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=p; j++)
    //     {
    //         printf(" ");
            
    //     }
    //     if(i%2==0)
    //     {
    //         for(int j = 1; j<=o; j++)
    //         {
    //             printf("-");
    //         }
    //         o -=4;
           
    //     }
    //     if(i%2==1)
    //     {
    //           for(int j = 1; j<=l; j++)
    //         {
    //         printf("#");
    //         }
    //         l-=4;
    //     }
    //     p++; 
        
    //     printf("\n");
       
    // }
    return 0;
}