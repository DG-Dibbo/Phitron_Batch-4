#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v= {1,2,3,4,5};
    // vector<int> v1 = {3,4};
    // vector <int> v3;
    // v1.insert(v1.end(),v.begin(),v.end());
    // v1.erase(v1.begin()+2,v1.end()-1);
    replace(v.begin(),v.end(),5,20);
    // vector <int>:: iterator it;
    auto it = find(v.begin(),v.end(),7);
    if(it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }
    
    // for(int i : v)
    // {
    //     cout << i<<" ";
    // }
    return 0;
}