#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node * &head,Node * &tail,int val)
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
int max_value(Node * head)
{
    Node * tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if(max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}
int min_value(Node * head)
{
    Node * tmp = head;
    int min = INT_MAX;
    while (tmp != NULL)
    {
        if(min > tmp->val)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    return min;
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
    int difference = max_value(head)-min_value(head);
    cout <<difference;
    return 0;
}