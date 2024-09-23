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

int main()
{
    Node * head = NULL;

    // Node * head = new Node(10);
    // Node * a = new Node(20);
    // Node * b = new Node(30);
    // Node * c = new Node(40);
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = a;
    Node *slow = head;
    Node * fast = head;
    bool find = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = head;
        fast = head->next->next;
        if(fast != NULL)
        {
            find = true;
            break;
        }
    }
    if(find == true)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout <<"Not detected";
    }
    return 0;
}