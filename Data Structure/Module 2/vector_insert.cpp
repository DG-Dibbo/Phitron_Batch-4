#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v= {10,20,30,40,50,60};
    //v.insert(v.begin()+2,25); output : 10 20 25 30 40 50.
    vector <int> v1 = {100,101,102,103,104};
    //v.insert(v.begin()+5,v1.begin()+2,v1.begin()+5);//output: 10 20 30 40 50 102 103 104.
    // v.insert(v.begin()+5,v1.begin(),v1.end());//output.10 20 30 40 50 100 101 102 103 104.
    v.insert(v.end(),v1.begin(),v1.end());
    for(int x: v)
    {
        cout << x << " ";
    }
    return 0;
}