#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void search_index(Node *head, int x)
{
    int count = 0;
    bool found = false;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == x)
        {
            found = true;
            break;
        }
        count++;
    }
    if (found == true)
    {
        cout << count << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else
            {
                insert_tail(head, tail, val);
            }
        }
        int x;
        cin >> x;
        search_index(head, x);
    }

    return 0;
}