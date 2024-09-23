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
int maxheight(Node * root)
{
    
    if(root == NULL) return 0;
    int l =maxheight(root->left);
    int r = maxheight(root->right);
    return max(l,r)+1;
}
int count_node(Node * root)
{
    if(root == NULL) return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return (l+r)+1;
}
int main()
{
    Node * root = input_tree();
    int c=maxheight(root);
    int res = pow(2,c)-1;
    if(res == count_node(root))
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}