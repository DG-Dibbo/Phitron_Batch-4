#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void leaf_num(Node * root,vector <int> &v)
{
    if(root == NULL) return;
          
    
    if(root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return;
    }
    leaf_num(root->left,v);
    leaf_num(root->right,v);
}
int main()
{
    Node * root = input_tree();
    vector <int> v;
    leaf_num(root,v);
    for(int i =0; i<v.size(); i++)
    {
        sort(v.begin(),v.end(),greater<int>());
    }
    for(int i =0; i<v.size(); i++)
    {
        cout <<v[i]<<" ";
    }
    return 0;
}