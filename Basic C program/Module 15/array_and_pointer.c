#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    
    // printf("0 index er address - %p\n",&a[0]);
    // printf("1 index er address - %p\n",a);
    printf("%d\n",1[a]); 
    printf("%d\n",*(1 + a)); 
    printf("%d\n",a[1]); 
    printf("%d\n",*(a + 1)); 
    printf("%d\n",*(a + 2)); 
    
    return 0;
}