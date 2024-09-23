#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void sum(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ar[3] = {a,b,c};  
    int tmp;
    for(int i = 0; i<3; i++)
    {
        for(int j = i+1; j<3; j++)
        {
            if(ar[i] > ar[j])
            {
                tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    for(int i =0; i<3; i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
}
int main()
{
    sum();

    return 0;
}

