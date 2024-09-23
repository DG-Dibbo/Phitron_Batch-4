#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int fun(char a[], int i)
{
    if(a[i] == '\0') return 0;
    int l = fun(a,i+1);
    return l+1;
}
int main()
{
    char a[] = "Dibbo";
    // scanf("%s",a);
    int length = fun(a,0);
    printf("%d\n",length);
    return 0;
}