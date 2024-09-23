#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    //ekhane strcpy(a,b);dile hoye jbe loop sara.
    for(int i = 0;i<=strlen(a);i++)
    {
        //int temp = a[i];
        a[i] = b[i];
        //b[i] = temp;// atake aro easy way te kora jaay
    //strcpy jake bole.
    }
    printf("%s %s",a,b);

    return 0;
}