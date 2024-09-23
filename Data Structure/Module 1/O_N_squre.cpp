#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)//O(N)
    {
        //O(N)*O(N) = O(N^2) complexity. 
        // ata (10^3)^2 = 10^6 porjonto jabe.
        for(int j = 1; j<=n; j++)//O(N)
        {
            cout << "Hello"<<endl;
        }
    }
    
    return 0;
}