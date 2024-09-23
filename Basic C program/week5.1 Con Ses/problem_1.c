#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
// int main()
// int max(int n,int *ar,int i)
// {
//     //base case
//     if(i == n-1)
//     {
//         return ar[i];
//     }
//     //recursive call
//     int mx = max(n,ar,i+1);
//     if(ar[i]>mx)
//     return ar[i];
//     return mx;
// }
int max(int n,int *ar)
{
    //base case
    if(n == 0)
    {
        return ar[0];
    }
    //recursive call
    int mx = max(n-1,ar);
    if(ar[n]>mx)
    return ar[n];
    return mx;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("%d",max(n-1,ar));
    return 0;
}