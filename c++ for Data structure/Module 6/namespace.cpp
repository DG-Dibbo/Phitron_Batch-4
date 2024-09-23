#include <bits/stdc++.h>
using namespace std;
namespace dibbo
{
    int age1 = 21;
    void dib()
    {
        cout << "My Name is Dibbo Ghosh"<< endl;
    }
}
namespace tisa
{
    int age2 = 20;
    void tis()
    {
        cout << "My Name is Tisa Rani" << endl;
    }
}
using namespace dibbo;
using namespace tisa;
int main()
{
    cout << age1 << endl;
    dib();
    cout << age2  << endl;
    tis();
    return 0;
}