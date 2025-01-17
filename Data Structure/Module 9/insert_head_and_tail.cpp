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
void print_default(Node * head)
{
    Node*tmp = head;
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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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
int size(Node*head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node *&head,Node *&tail,int val)
{
    Node * newnode = new Node(val);
    // Node*tmp = head;
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
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    //connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    int pos,val;
    cin >> pos >> val;
    //insert_tail(head,tail,val);
    if(pos == 0)
    {
        insert_head(head,tail,val);
    }
    else if(pos >size(head))
    {
        cout << "Invalid Index"<<endl;
    }
    else if(pos ==size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }    
    print_default(head);
    print_reverse(tail);
    return 0;
}