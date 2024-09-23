#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    //cout<< v.max_size();
    // v.push_back(10);//1
    // cout << v.capacity()<<endl;
    // v.push_back(20);//2
    // cout << v.capacity()<<endl;
    // v.push_back(30);//4
    // cout << v.capacity()<<endl;
    // v.push_back(40);//4
    // cout << v.capacity()<<endl;
    // v.push_back(50);//8
    // cout << v.capacity()<<endl; //capacity limit over hole double kore bare.

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.clear();
    // cout << v.size() << endl; // 0
    
    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << v[0];// memory theke value delete hoy nh clear korar por oh
    // // 10
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    //cout << v.empty();
    v.resize(2);//output : 10,20;
    v.resize(5,40); // output : 10 20 40 40 40;
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}