#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5,1,2,3,4,5,1,3,2};
    //replace and find not under a vector.

    // replace
    // replace(v.begin(),v.end(),2,100); // 2 jto jaygay ace sob jaygay 2 er bodole 100 bosbe.
    
    // for(int x : v)
    // {
    //     cout << x << " ";
    // }
    //find
    vector <int> :: iterator it;
    it = find(v.begin(),v.end(),100);
    if(it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}