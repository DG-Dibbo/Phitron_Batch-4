#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1500 )
    {
        printf("I will buys Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(1000<n && 1500>n)
    {
        printf("I will buy Punjabi\n");
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}