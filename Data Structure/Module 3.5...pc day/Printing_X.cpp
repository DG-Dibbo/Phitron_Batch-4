#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                if(j == n/2+1)
                {
                    cout <<"X";
                }
                else
                {
                    cout <<"\\";
                }
            }
            else if(j == n-i+1)
            {
                cout <<"/";
            }
            else
            {
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}