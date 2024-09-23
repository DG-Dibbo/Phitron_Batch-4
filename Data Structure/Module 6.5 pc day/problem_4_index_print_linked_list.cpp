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

void insert_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_pos(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int cnt(Node *head)
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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

int main()
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
        insert_tail(head, val);
        tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, v;
        cin >> pos >> v;
        if (pos > cnt(head))
        {
            cout << "Invalid" << endl;
            continue;
        } 
        else if (pos == 0)
        {
            insert_head(head, v);
        }
        else if (pos == cnt(head))
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            insert_pos(head, pos, v);
        }
        print_linked_list(head);
    }
    return 0;
}
