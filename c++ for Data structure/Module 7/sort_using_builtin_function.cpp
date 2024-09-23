#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int ID;
        int Reg;
};
bool cmp(student a, student b)
{
    if(a.Reg == b.Reg)
    {
        return a.ID < b.ID;
    }
    else
    {
        return a.Reg > b.Reg;
    }
    // if(a.Reg > b.Reg)
    // {
    //     return true;
    // }
    // else if(a.Reg < b.Reg)
    // {
    //     return false;
    // }
    // else
    // {
    //     if(a.ID < b.ID) return true;
    //     else return false;
    // }
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i<n; i++)
    {
        cin >>a[i].name>> a[i].ID >> a[i].Reg;
    }
    sort(a,a+n,cmp);
    for(int i = 0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].ID << " " 
        << a[i].Reg << endl;
    }
    return 0;
}