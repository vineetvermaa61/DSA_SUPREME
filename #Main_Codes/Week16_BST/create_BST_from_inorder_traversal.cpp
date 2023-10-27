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

//
Node *bstUsingInorder(int inorder[], int s, int e)
{
    if (s > e)
        return NULL;
    int mid = s + (e - s) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);
    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);
    return root;
}
int main()
{
    // int inorder[] = {10, 20, 30, 40, 50, 60, 70, 80};
    // int inorder[] = {50, 60, 70, 80};
    int inorder[] = {25, 36, 48, 55, 90};
    int s = 0;
    int e = sizeof(inorder) / sizeof(int) - 1;
    Node *root = bstUsingInorder(inorder, s, e);
    level_order_traversal(root);
    return 0;
}