#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        /* code */
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        int max1 = INT_MIN,max2 = INT_MIN;
        int index1,index2;
        for(int i = 0; i<n; i++)
        {
            if(a[i] > max1)
            {
                max2 = max1;
                index2 = index1;
                max1 = a[i];
                index1 = i;
            }
            else if(a[i] > max2)
            {
                max2 = a[i];
                index2 = i;
            }
        }
        if(index1 < index2)
        {
            cout << index1 << " " << index2 << endl;
        }
        else
        {
            cout << index2 << " " << index1 << endl;
        }
    }
    
    return 0;
}