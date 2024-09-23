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
int size(Node * head)
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
int main()
{
    Node *head = NULL;
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
    int sz = size(head);
    Node *tmp = head;
    if(sz%2 != 0)
    {
        for(int i = 0; i<sz/2; i++)
        {
            tmp = tmp->next;
        }
        cout <<tmp->val;
    }
    else
    {
        for(int i =0; i<sz/2-1; i++)
        {
            tmp = tmp->next;
        }
        cout <<tmp->val<<" "<<tmp->next->val;
    }
    return 0;
}