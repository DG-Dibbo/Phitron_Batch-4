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
student *fun()
{
    student* dibbo =  new student(12221023,14,3.52);
    //student *p = &dibbo;
    return dibbo;
}
int main()
{
    student *ans = fun();
    //cout << " "<< ans.roll << " " << ans.cls << " " << ans.gpa << endl;
    cout<< ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    delete ans;
    //cout<< ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    return 0;
}