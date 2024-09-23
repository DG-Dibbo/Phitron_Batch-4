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
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i<n; i++)
    {
        getchar();
        getline(cin,a[i].name);
        cin >> a[i].ID >> a[i].Reg;
    }
    for(int i = 0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].ID << " " 
        << a[i].Reg << endl;
    }
    return 0;
}