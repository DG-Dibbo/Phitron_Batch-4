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
void insert_tail(Node *&head,Node *&tail, int val)
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
void delete_node(Node * head,int val)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if(temp->next->val == val)
        {
            Node * deletenode = temp->next;
            temp->next = deletenode->next;
            delete deletenode;
        }
        else
        {
            temp = temp->next;
        }
    }
    
}
void same_val(Node * head,int val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_node(tmp,tmp->val);
        tmp = tmp->next;
    }
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp=tmp->next;
    }
    
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
        insert_tail(head,tail,val);       
    }
    same_val(head,val);
    print_linked_list(head);
    return 0;
}