#include <stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m1,m2,d;
    for(int i = 0; i<n; i++)
    {
        
        scanf("%d %d %d",&m1,&m2,&d);    
        int mul;
        if(m2>=0)
        {
            mul = d * m1;
            printf("%d\n",mul/m1 - mul/(m1+m2));
        }
    }
     
    return 0;
}