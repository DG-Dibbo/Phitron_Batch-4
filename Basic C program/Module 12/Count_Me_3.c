#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--)
    {
    char a[10001];
        scanf("%s", a);

        int capital = 0, small = 0,digits = 0;
       
        int len = strlen(a);
        for (int i = 0; i < len; i++) 
    {
        if (a[i] >= 'A' && a[i] <= 'Z') 
        {
            capital++;
        } 
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            small++;
        } 
        else if (a[i] >= '0' && a[i] <= '9') {
            digits++;
        }
    }
    
    printf("%d %d %d\n", capital, small, digits);
    }
    return 0;
}