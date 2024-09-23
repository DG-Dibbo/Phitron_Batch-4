#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
void bikash()
{
    printf("PIN Fast\n"); 
    printf("PIN Last\n"); 
}
void nogod()
{
    printf("Nogod Start\n");
    bikash();
    printf("Nogod End\n");
}
int main()
{
    printf("Main fast\n");
    nogod();
    printf("Main last\n");

    return 0;
}