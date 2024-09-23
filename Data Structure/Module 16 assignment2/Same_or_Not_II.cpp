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
class myStack
{
    public:
        Node *head = NULL;
        Node * tail = NULL;
        int sz = 0;
        void push(int val)
        {
            sz++;
            Node *newnode = new Node(val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            newnode->prev = tail;
            tail->next = newnode;
            tail = tail->next;
        }
        void pop()
        {
            sz--;
            Node *deletenode = tail;
            if(tail == NULL)
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
            tail = tail->prev;
            delete deletenode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
class myQueue
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz= 0;
        void push(int val)
        {
            sz++;
            Node *newnode = new Node (val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            //tail = tail->next or tail = newnode ..jekono akta likhle hbe;
        }
        void pop()
        {
            sz--;
            Node *deletenode = head;
            head = head->next;
            if(head == NULL)
            {
                tail = NULL;
                delete deletenode;
                return;
            }
            head->prev = NULL;
            delete deletenode;
        }
        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz == 0) return true;
            else return false;
        }
};
int main()
{
    
    int n,m;
    cin >>n>>m;
    myStack st;
    myQueue q;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    for(int i = 0; i<m; i++)
    {
        int y; 
        cin >>y;
        q.push(y);
    }
    while (!st.empty() && !q.empty())
    {
        if(st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            break;
        }
    }
    if(st.empty() && q.empty())
    {
        cout<<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}