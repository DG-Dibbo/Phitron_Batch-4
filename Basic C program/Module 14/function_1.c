#include <stdio.h>
#include<string.h>
#include<limits.h>
//return_type + parameter
// return_type(parameter)
// {
//     //code 
//     return what?
// }
int sum(int x,int y)
{
  int sum = x+y;
  return sum;
}
int main()
{
    // int s = sum(10,20);
    // int p = sum(100,20);
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,20));
    printf("%d\n",sum(0,20));
    return 0;
}