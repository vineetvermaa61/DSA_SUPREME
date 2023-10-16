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

int maxVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return -1;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node *deleteNodeInBST(Node *root, int target)
{
    // base case:
    if (root == NULL)
        return NULL;
    if (root->data == target)
    {
        // isi ko delete karna hai
        // 4 cases
        if (root->left == NULL && root->right == NULL)
        {
            // leaf node
            delete root;
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            // single child case
            Node *child = root->right;
            delete root;
            return child;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            // single child case
            Node *child = root->left;
            delete root;
            return child;
        }
        else
        {
            // both child
            // Step1: find inorder predecessor in left subtree
            int inorderPredecessor = maxVal(root->left);
            // Step2: replace root->data value with inorder predecessor
            root->data = inorderPredecessor;
            // Step3: delete inorder predecessor from left subtree
            root->left = deleteNodeInBST(root->left, inorderPredecessor);
            return root;
        }
    }
    else if (target > root->data)
    {
        // right jana chahiye
        root->right = deleteNodeInBST(root->right, target);
    }
    else if (target < root->data)
    {
        // left jana chahiye
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    cout << "Enter the data for the node: " << endl;
    takeInput(root);
    level_order_traversal(root);
    int target = 20;
    root = deleteNodeInBST(root, target);
    cout << endl
         << "After deletion of " << target << ": " << endl;
    level_order_traversal(root);
    return 0;
}