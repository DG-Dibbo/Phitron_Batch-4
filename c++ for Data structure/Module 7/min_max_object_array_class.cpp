#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int ID;
        int Reg;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        student a[3];
        for(int i = 0; i<3; i++)
        {
            cin >> a[i].name >> a[i].ID >> a[i].Reg;
        }
        student mx;
        mx.Reg = INT_MIN;
        // student mn;
        mx.ID = INT_MAX;
        for(int i = 0; i<3; i++)
        {
            if(a[i].Reg > mx.Reg)
            {
                mx = a[i];               
            }
        }
        cout << mx.name<<" "<<mx.ID<<" "<<mx.Reg<<endl;
    }
    
    return 0;
}