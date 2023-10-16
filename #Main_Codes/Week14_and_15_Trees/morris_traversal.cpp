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
Node *buidTree()
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for left part of " << data << " node" << endl;
    root->left = buidTree();
    cout << "Enter the data for right part of " << data << " node" << endl;
    root->right = buidTree();
    return root;
}

// MORRIS TRAVERSAL:
vector<int> inorderTraversal(Node *root)
{
    vector<int> ans;
    Node *curr = root;
    while (curr)
    {
        // left is null, then visit and go right
        if (curr->left == nullptr)
        {
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            // left node is not null
            // find the inorder predecessor
            Node *pred = curr->left;
            while (pred->right != curr && pred->right)
            {
                pred = pred->right;
            }
            // if pred right is null , then go left after establishing link from pred to curr
            if (pred->right == nullptr)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                // left is already visited, go right after visiting curr node, while removing the link
                pred->right = nullptr;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buidTree();
    // levelOrderTraversal(root);
    inorderTraversal(root);
    return 0;
}