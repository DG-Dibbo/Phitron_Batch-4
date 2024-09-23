#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist = {10,20,30,40,50};
    // list <int> newlist;
    // newlist = mylist;
    // newlist.assign(mylist.begin(),mylist.end());
    // mylist.push_front(100)
    // mylist.pop_back(1);
    // mylist.pop_front();
    // mylist.pop_back();
    // mylist.insert(next(mylist.begin(),2),{100,200,300});
    // mylist.erase(next(mylist.begin(),1),next(mylist.begin(),4));
    // replace(mylist.begin(),mylist.end(),30,60);
    // for(int val:mylist)
    // {
    //     cout << val << endl;
    // }
    auto it = find(mylist.begin(),mylist.end(),70);
    // cout << *it;
    if(it == mylist.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}