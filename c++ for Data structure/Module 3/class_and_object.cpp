#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin >> a.cgpa  >> a.roll;
    getchar();
    cin. getline(b.name,100);
    cin >> b.cgpa >> b.roll;
    // a.roll = 12221023;
    // a.cgpa = 3.35;
    // char tmp[100] = "Dibbo";
    // strcpy(a.name,tmp);
    cout << a.name << endl << a.cgpa << endl << a.roll << endl;
    cout << b.name << endl << b.cgpa << endl << b.roll << endl;
    return 0;
}