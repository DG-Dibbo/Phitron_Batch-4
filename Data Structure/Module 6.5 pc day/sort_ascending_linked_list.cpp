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
bool sorted(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node * tmp2 = tmp->next;
        while (tmp2 != NULL)
        {
            if(tmp->val > tmp2->val)
            {
                return false;
            }
            tmp2=tmp2->next;
        }
        tmp = tmp->next;
    }
    return true;
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
    if(sorted(head))
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}