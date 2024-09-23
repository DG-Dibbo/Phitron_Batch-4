#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(student a, student b)
{
    if (a.math_marks+a.eng_marks == b.math_marks+b.eng_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.math_marks+a.eng_marks > b.math_marks+b.eng_marks; // If total marks are the same, sort by ID in ascending order
    }
} // Sort by total marks in descending order

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >>
            a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " "
             << a[i].section << " " << a[i].id << " " << a[i].math_marks << " "
             << a[i].eng_marks << endl;
    }
    return 0;
}
