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
bool duplicate(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *runner = current->next;

        while (runner != NULL)
        {
            if (current->val == runner->val)
            {
                return true; // Found a duplicate
            }
            runner = runner->next;
        }

        current = current->next;
    }

    return false; // No duplicates found
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
    if(duplicate(head))
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}