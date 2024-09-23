#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch (a%2)
    {
        case 0:
            cout << "EVEN"<<endl;
        break;
        case 1:
            cout << "ODD"<<endl;
        break;
        
    }
    return 0;
}