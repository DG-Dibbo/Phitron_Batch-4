#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double GPA;
    Student(int roll,int cls,double GPA)
    //Student(int r,int c,double g)
    {
        this->roll = roll;
        this->cls = cls;
        this->GPA = GPA;
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).GPA = GPA;
        // roll = r;
        // cls = c;
        // GPA = g;
    }
};
int main()
{
    Student Dibbo(12221023,14,3.35);
    Student Tisa(12221022,13,3.55);
    cout << Dibbo.roll << " " << Dibbo.cls << " " << Dibbo.GPA<< endl;
    cout << Tisa.roll << " " << Tisa.cls << " " << Tisa.GPA<< endl;
    return 0;
}