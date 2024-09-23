#include <stdio.h>
int main()
{
    int sum,mns,mul,remainder,a=3,b=20;
    
    sum = a + b;
   
    mns = b - a;
    
    mul = a * b;
    
    float dvd = b*1.0/ a;
    
    remainder = b % a;

    printf("%d\n%d\n%d\n%f\n%d",sum,mns,mul,dvd,remainder);

    return 0;
}
// typecusting in c
// #include <stdio.h>

// int main() {

//    int sum = 20, count = 3;
//    double mean;

//    mean = (double) sum / count;
//    printf("Value of mean : %0.3f\n", mean );

//    return 0;
// }