#include <bits/stdc++.h>
using namespace std;
class parson
{
    public:
        string name;
        int age;
        parson(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    parson* Dibbo = new parson("Dibbo Ghosh",22);
    parson* Tisa = new parson("Tisa Rani",21);
    // Dibbo->name = Tisa->name;
    // Dibbo->age = Tisa->age;
    *Dibbo = *Tisa;
    delete Tisa;
    cout << Dibbo->name <<" "<< Dibbo->age << endl;
    //cout << Tisa.name << " " << Tisa.age << endl;
    return 0;
}