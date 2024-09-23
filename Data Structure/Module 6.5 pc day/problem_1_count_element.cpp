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
void insert_tail(Node * &head,int val)
{
    Node * newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node * tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
int print_linked_list(Node * head)
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
int main()
{
    int val;
    Node * head = NULL;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head,val);
        }
        
    }
    cout <<print_linked_list(head);
    
    return 0;
}