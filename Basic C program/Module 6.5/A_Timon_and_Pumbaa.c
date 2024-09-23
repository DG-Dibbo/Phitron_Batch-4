#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int mns;
    mns = a-b;
    if(mns >=0)
    {
        printf("%d",mns);
    }
    else
    {
        printf("0");
    }
    return 0;
}