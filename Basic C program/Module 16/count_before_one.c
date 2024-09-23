#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int count_before_one(int A[], int N) 
{
    int count = 0;
    for (int i = 0; i < N; i++) 
    {
        if (A[i] == 1) 
        {
            return count;
        }
        count++;
    }
    return count;
}
int main() 
{
    int n;
    scanf("%d", &n);
    int A[n];
    
    for (int i = 0; i < n; i++) 
    {
        scanf(" %d",&A[i]);
    }

    int found = count_before_one(A, n);
    printf("%d\n", found);

    return 0;
}
