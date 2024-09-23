#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node * &head,Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;   
}
void insert_head(Node * &head, Node* &tail,int val)
{
    Node * newnode = new Node(val);
    Node * tmp = head;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_position(Node *head,int pos,int val)
{
    Node*newnode = new Node(val);
    Node* tmp = head;
    for(int i =1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev=newnode;
    newnode->prev = tmp;
}
int size(Node * head)
{
    Node * tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print_default(Node * head)
{
    Node*tmp = head;
    cout <<"L ->"<<" ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    cout << "R ->"<<" ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos,val;
        cin >> pos >> val;
        if(pos > size(head))
        {
            cout << "Invalid"<<endl;
        }
        else if(pos == 0)
        {
            insert_head(head,tail,val);
            print_default(head);
            print_reverse(tail);
        }
        else if(pos == size(head))
        {
            insert_tail(head,tail,val);
            print_default(head);
            print_reverse(tail);
        }
        else 
        {
            insert_at_position(head,pos,val);
            print_default(head);
            print_reverse(tail);
        }
    }
    return 0;
}