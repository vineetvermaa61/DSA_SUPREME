
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
//  I/P:    10 20 5 11 17 2 4 8 6 25 15 -1

//  O/P:    10
//          5 20
//          2 8 11 25
//          4 6 17
//          15

// INSERTION:
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        // insert in left
        root->left = insertIntoBST(root->left, data);
    }
    else
    { // insert in right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
bool solve(Node *root, long long int lb, long long int ub)
{
    if (root == NULL)
        return true;
    if (root->data > lb && root->data < ub)
    {
        bool leftAns = solve(root->left, lb, root->data);
        bool rightAns = solve(root->right, root->data, ub);
        return leftAns && rightAns;
    }
    else
    {
        return false;
    }
}
bool isValidBST(Node *root)
{
    //     cout<<INT_MIN<<endl;
    //     cout<<INT_MAX<<endl;
    long long int lowerBound = -2147483649;
    long long int upperBound = 2147483648;
    bool ans = solve(root, lowerBound, upperBound);
    return ans;
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data for the node: " << endl;
    takeInput(root);
    level_order_traversal(root);
    return 0;
}