#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int test;
    scanf("%d",&test);
    while (test--)
    {
        int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n];

    // Input array a
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        b[i] = a[i]; // Copy elements to array b
    }

    // Sort array a in ascending order
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i+1; j < n; j++) 
        {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ",abs(b[i]-a[i]));
    }
    printf("\n");
    }   
    return 0;
}
