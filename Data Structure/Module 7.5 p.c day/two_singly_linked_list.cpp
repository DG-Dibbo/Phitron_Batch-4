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
    int sz1 = size(head);
    // cout <<sz1<<endl;
    Node *head1 = NULL;
    Node * tail1 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if(val2 == -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    int sz2 = size(head)/2;
    
    if(sz1 == sz2)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}