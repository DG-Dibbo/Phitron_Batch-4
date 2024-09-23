#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    float gpa;
    student(int roll,int cls,float gpa)
    {
        
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};
int main()
{
    student* Dibbo = new student(12221023,14,3.51);
    cout << Dibbo->roll << " " << Dibbo->cls << " " << Dibbo->gpa << endl;
    return 0;
}