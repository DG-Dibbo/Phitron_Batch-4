#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist={10,20,40,50,30,10,10};
    // mylist.remove(10);
    mylist.sort();
    mylist.unique();
    for(int val:mylist)
    {
        cout << val <<" ";
    }
    cout <<endl;
    mylist.sort(greater<int>());
    for(int val:mylist)
    {
        cout << val <<" ";
    }
    return 0;
}