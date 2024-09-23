#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"Sakib", 75});
    mp.insert({"Rakib", 71});
    mp.insert({"Lakib", 100});
    mp.insert({"Dibbo", 0});
    mp["Alo"] = 73;
    // for(auto it = mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first <<" "<<it->second<<endl;
    // }
    // cout << mp["Sakib"]<<endl;
    if (mp.count("Dibbo"))
    {
        
        cout << "Ase" << endl;
        cout<<mp.count("Dibbo")<<endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    
    return 0;
}