#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30,40,50};
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(5,7);
    mylist.empty();
    // cout << mylist.max_size() <<endl;
    for(int val : mylist)
    {
        cout << val<<endl;
    }
    
    return 0;
}