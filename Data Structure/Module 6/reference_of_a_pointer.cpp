#include <bits/stdc++.h>
using namespace std;
void fun(int * ptr)
{
    //cout << &ptr<<endl;
    // *ptr = 30;
    *ptr = NULL;
    
}
int main()
{
    int val = 20;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr;
    return 0;
}