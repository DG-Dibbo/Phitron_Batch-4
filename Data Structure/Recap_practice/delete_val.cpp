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
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newnode = new Node (val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout <<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}
void remove_element(Node *head,int val)
{
    if(head == NULL)
    {
        return;
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val == val)
        {
            delete tmp;
            break;
        }
        tmp = tmp->next;
    }
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int v;
    cin >> v;
    remove_element(head,v);
    print_linked_list(head);
    return 0;
}