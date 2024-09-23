#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int> v;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }    
    for(int i =0; i<n; i++)
    {
    
        cout <<v.back()<<" ";
        v.pop_back();
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     // Use pop_back in a loop
//     for (int i = 0; i < n; i++) {
//         // Check if the vector is not empty before using pop_back
//         if (!v.empty()) {
//             cout << v.back()<< " ";
//             v.pop_back();
//         } else {
//             cout << "Vector is empty." << endl;
//         }
//     }

//     return 0;
// }
