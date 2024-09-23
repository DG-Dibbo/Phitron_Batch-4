#include <stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
long long int fun(long long int a[],int n, int i,long long int *sum)
{
    
    if(i == n) return 0;    
    fun(a,n,i+1,sum); 
    long long int p = *sum += a[i];
    return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long  a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum = 0;
    long long  int s = fun(a,n,0,&sum);
    printf("%lld",s);
    return 0;
}
// #include <stdio.h>
// long long int sum(long long a[],int n,int i)
// {
//     if(i == n) return 0;
//     long long s = sum(a,n,i+1);
//     return s +a[i];
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long a[n];
//     for(int i = 0; i<n; i++)
//     {
//         scanf("%lld",&a[i]);
//     }
//     long long s = sum(a,n,0);
//     printf("%lld",s);
//     return 0;
// }