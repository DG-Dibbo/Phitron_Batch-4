//lexicographical comparison in string.
#include <stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i = 0;
    while(1)
    {
        if(a[i] == '\0' && b[i]== '\0')
        {
            printf("Same");
            break;
        }
        else if(a[i]== '\0')
        {
            printf("A is smaller.");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("B is smaller.");
            break;
        }
        else if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A choto");
            break;
        }
        else
        {
            printf("B choto");
            break;
        }
    }
    return 0;
}