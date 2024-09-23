#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int mark;
    student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.mark < b.mark)
        {
            return true;
        }
        else if (a.mark > b.mark)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<student, vector<student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        student obj(name, roll, mark);
        pq.push(obj);
    }
    int c;
    cin >> c;
    for (int i = 1; i <= c; i++)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            int roll, mark;
            cin >> name >> roll >> mark;
            student obj(name, roll, mark);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (cmd == 1)
        {
            if (pq.size() != 0)
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {
            if (pq.size() != 0)
                pq.pop();
            if (pq.size() != 0)
            {

                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}