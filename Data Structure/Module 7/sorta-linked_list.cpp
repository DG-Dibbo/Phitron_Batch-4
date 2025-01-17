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
void insert_tail(Node * &head,Node *&tail,int val)
{
    Node * newnode = new Node(val);
    // Node * newnode = head;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_linekd_list(Node * head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head,tail,val);
        }
    }
    print_linekd_list(head);
    cout << "Print first part";
    cout <<endl;

    for(Node * i = head; i->next!= NULL; i= i->next)
    {
        for(Node * j = i->next; j!=NULL; j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    cout <<"Print ascending order"<<endl;
    print_linekd_list(head);
    cout <<endl;
    cout << "Print decending order"<<endl;
    for(Node * i = head; i->next!= NULL; i= i->next)
    {
        for(Node * j = i->next; j!=NULL; j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print_linekd_list(head);
    return 0;
}