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
int size_val(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val2);
    }
    int fast_input = size_val(head1);
    int second_input = size_val(head2);
    bool same = true;
    if (fast_input != second_input)
    {
        same = false;
    }
    else
    {
        Node *test1 = head1;
        Node *test2 = head2;
        while (test1 != NULL && test2 != NULL)
        {
            if (test1->val != test2->val)
            {
                same = false;
                break;
            }
            test1 = test1->next;
            test2 = test2->next;
        }
    }
    if(same == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}