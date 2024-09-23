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
void delete_at_position(Node * head,int pos)
{
    Node * tmp = head;
    for(int i =1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
}
void delete_head(Node * &head,Node *&tail)
{
    Node * deletenode = head;
    head = head->next;
    delete deletenode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL; 
}
void delete_tail(Node * &head,Node* &tail)
{
    Node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    int pos;
    cin >> pos;
    if(pos == 0)
    {
        delete_head(head,tail);
    }
    else if(pos == size(head)-1)
    {
        delete_tail(head,tail);        
    }
    else if(pos >= size(head))
    {
        cout << "Invalid Index"<<endl;
    }
    else
    {
        delete_at_position(head,pos);
    }
    print_default(head);
    print_reverse(tail);
    return 0;
}