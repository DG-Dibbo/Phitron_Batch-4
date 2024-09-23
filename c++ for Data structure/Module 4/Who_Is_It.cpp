
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int ID;
    char name[101];
    char section;
    int totalmarks;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student students[3];
        int high = -1;
        int id = 0;

        for (int i = 0; i < 3; ++i) 
        {
            cin >> students[i].ID >> students[i].name >> students[i].section >> students[i].totalmarks;
            if (students[i].totalmarks > high || (students[i].totalmarks == high && students[i].ID < students[id].ID)) 
            {
                high = students[i].totalmarks;
                id = i;
            }
        }       
        cout << students[id].ID << " " << students[id].name << " " << students[id].section << " " << students[id].totalmarks << endl;
    }
    return 0;
}

