#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // while (n>0)//O(logN) complexity
    // {
    //     int digit = n%10;
    //     cout << digit << endl;
    //     n/=10;
    // }
    // logN highest 60 bar loop calabe.10^18 porjonto nite parbo
    for(int i = 1; i<n; i= i*2)//O(logN) complexity
    {
        cout << i<< endl;
    }
    return 0;
}