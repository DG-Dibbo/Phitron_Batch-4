#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v;//type 1 
    // cout << v.size();// 0

    // vector <int> v(5);//type 2
    // cout << v.size();// 5

    // vector<int> v(5,10);//type 3
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i]<<" ";//10 10 10 10 10
    // }
    // cout << endl;
    // cout << v.size();//5

    // vector <int> v2(5,100);//type 4
    // vector <int> v(v2);//type 4
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";// 100 100 100 100 100
    // }
    // cout << endl;
    // cout << v.size(); // 5

    // int a[6] = {1,2,3,4,5,6}; // type 5
    // vector <int> v(a,a+6); //type 5
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i]<< " "; // 1 2 3 4 5 6
    // }
    // cout << endl;

    vector <int> v = {2,20,4}; // type 6
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();
    return 0;
}