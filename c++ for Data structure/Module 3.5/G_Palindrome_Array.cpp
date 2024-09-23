#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int p[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        p[i] = a[i];
    }
    
    int i = 0,j = n-1;
    while (i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }    
    for(int i = 0; i<n; i++)
    {
        if(p[i] != a[i])
        {
            cout << "NO" <<endl;
            return 0;
        }  
    }
    cout << "YES" << endl;
    return 0;
}