#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("Go to Cox's bazar\n");
        if(tk >=10000)
        {
            printf("Go to Saintmartin\n");
        }
        else
        {
            printf("Come back\n");
        }
    }
    else
    {
        printf("Cann't go there\n");
    }
    return 0;
}