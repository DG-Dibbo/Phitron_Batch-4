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
void insert_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void delete_from_position(Node *head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, val);
        }
        else if (pos == 1)
        {
            insert_tail(head, val);
        }
        else if (pos == 2)
        {
            if (val == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, val);
            }
        }
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}