#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=sqrt(n); i++)// O(sqrt(N)) complexity
    // 10^14 porjonto nite parbo.
    {
        if(n%i== 0)
        {
            cout << i << " ";
            if(n/i != i) cout << n/i << endl;
        }
    }
    return 0;
}