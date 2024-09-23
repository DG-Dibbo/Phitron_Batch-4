#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    a[0] = 0;
    a[1] = 1;
    for(ll i = 2; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n];
    return 0;
}