#include <bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    string dep;
    int marks1;
    int marks2;
    //string name;
    person(string name,int age,string dp,int m1,int m2)
    {
        this->age = age;
        this->name = name;
        dep = dp;
        marks1 = m1;
        marks2 = m2;
    }
    void me()
    {
        cout <<age<< endl;
    }
    int hi()
    {
        return marks1+marks2;
    }
};
int main()
{
    person dibbo("Dibbo Ghosh",22,"CSE",110,100);
    cout <<"DEP :"<< dibbo.dep<< " " <<"Student Name :" <<
    dibbo.name<< endl;
    dibbo.me();
    cout <<"Total Mark:" <<  dibbo.hi() << endl;
    return 0;
}