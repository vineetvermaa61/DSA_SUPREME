#include <iostream>
#include <vector>
#include <queue>
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
Node *buildTree()
{
    int data;
    cout << "Enter the data ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for left part of " << data << " node" << endl;
    root->left = buildTree();
    cout << "Enter the data for right part of " << data << " node" << endl;
    root->right = buildTree();
    return root;
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

// CONVERT INTO SUM TREE:
int convertIntoSumTree(Node *root)
{
    // base case:
    if (root == NULL)
    {
        return 0;
    }
    int leftAns = convertIntoSumTree(root->left);
    int rightAns = convertIntoSumTree(root->right);
    root->data = leftAns + rightAns + root->data;
    return root->data;
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);
    convertIntoSumTree(root);
    level_order_traversal(root);
    return 0;
}