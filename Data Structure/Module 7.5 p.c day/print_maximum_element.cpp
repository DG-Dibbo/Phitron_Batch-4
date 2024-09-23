#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node * &head, Node *&tail, int val)
{
    Node * newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_max_element(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin >>val;
        if(val == -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    Node *tmp = head;
    for(Node *i = head; i->next!= NULL; i= i->next)
    {
        for(Node *j = i->next; j != NULL; j= j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print_max_element(head);
    return 0;
}