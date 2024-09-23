#include <bits/stdc++.h>
using namespace std;
int **fun()
{
    int *a = new int;
    //cout << "fun : " << a << endl;
    *a = 300;
    cout << "fun :" << &a << endl;
    // int **p = &a;
    return &a;
}
int main()
{
    int **p = fun();
    cout << "main :" << p << endl;
    // int *a = new int;
    // *a = 200;
    // cout << *a << endl;
}