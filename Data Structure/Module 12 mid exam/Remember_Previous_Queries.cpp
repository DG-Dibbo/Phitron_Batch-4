#include <iostream>
#include <list>

using namespace std;

void print_doubly(list<int> &mylist, string declar)
{
    cout << declar << " -> ";
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >>q;
    list<int> myList;

    for (int i = 0; i < q; i++)
    {
        int pos, val;
        cin >> pos >> val;
        if(pos > myList.size())
        {
            cout << "Invalid"<<endl;
        }
        if (pos == 0)
        {
            myList.push_front(val);
        }
        else if (pos == 1)
        {
            myList.push_back(val);
        }
        else if (pos == 2)
        {
            if (val >= 0 && val < myList.size())
            {
                auto it = next(myList.begin(), val);
                myList.erase(it);
            }
        }

        print_doubly(myList, "L");
        myList.reverse(); // Reverse the list for right-to-left printing
        print_doubly(myList,"R");
        myList.reverse(); // Reverse the list back to the original order
    }
    return 0;
}
