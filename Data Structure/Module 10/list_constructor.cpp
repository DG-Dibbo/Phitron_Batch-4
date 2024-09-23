#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* list<int> mylist;
     cout << mylist.size(); output 0;*/

    /* list<int> mylist(5,5);
      cout << mylist.front(); // output 5;
    for(auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it <<endl; output 5,5,5,5,5;
    }*/

    /* list <int> list2 = {1,2,3,4,5};
    list<int> mylist(list2);
    for(int val: mylist)
    {
        cout << val<<endl;
    }*/

    // int a[5] = {10,20,30,40,50};
    // list <int> mylist(a,a+5);
    // for(auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it <<endl;
    // }

    vector <int> v = {100,200,300};
    list <int> mylist(v.begin(),v.end());
    for(auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it <<endl;
    }
    return 0;

}