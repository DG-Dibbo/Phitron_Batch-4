#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i]; 
        if(a[i] > mx)
        {
            mx =max(a[i], mx);
        }
    } 
    cout<<mx << endl;   
    return 0;
}
