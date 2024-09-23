#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a =*b; 
//     *b = tmp;
// }
int main()
{
    int a,b;
    cin >> a >> b;
    //int mn = min (a,b);
    //int mx = max (a,b);
    //int mn = min({a,b,c,d});
    //int mx = max({a,b,c,d});
    //my_swap(&a,&b);
    swap(a,b);
    cout << a <<" "<< b << endl;
    return 0;
}