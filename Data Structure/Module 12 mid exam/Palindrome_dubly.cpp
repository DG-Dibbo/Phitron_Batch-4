#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail,int val)
{
    Node * newnode = new Node (val);
    Node * tmp = head;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}
int print_doubly_list(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        return tmp->val;
        tmp= tmp->next;
    }
    cout <<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insert_tail(head,tail,val);
    }
    Node * head2 = NULL;
    Node * tail2 = NULL;
    Node * tmp = head;
    while (tmp != NULL)
    {
        insert_tail(head2,tail2,tmp->val);
        tmp = tmp->next;
    }
    reverse(head,tail);
    Node * tmp2 = head2;
    tmp = head;
    bool found = true;
    while(tmp!= NULL)
    {
        if(tmp->val != tmp2->val)
        {
            found = false;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if(found)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}