#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Burger khabo");
         
    }
    else if(tk >=50)
    {
        printf("Fuchka khabo");
    }
    else if(tk >=20)
    {
        printf("icecrem khabo");
    }
    else
    {
        printf("Kisui khabo nh");
    }
    return 0;
}
