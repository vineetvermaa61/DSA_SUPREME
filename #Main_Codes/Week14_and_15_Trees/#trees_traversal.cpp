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

// LEVEL ORDER TRAVERSAL:
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
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

// INORDER TRAVERSAL:
void inorderTraversal(Node *root)
{
    // base case:
    if (root == NULL)
    {
        return;
    }
    // LNR:
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// PREORDER TRAVERSAL:
void preorderTraversal(Node *root)
{
    // base case:
    if (root == NULL)
    {
        return;
    }
    // NLR:
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// POSTORDER TRAVERSAL:
void postorderTraversal(Node *root)
{
    // base case:
    if (root == NULL)
    {
        return;
    }
    // LRN:
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
// // LEVEL ORDER TRAVERSAL (with new line print):
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

int main()
{
    Node *root = NULL;
    root = buidTree();
    // levelOrderTraversal(root);
    inorderTraversal(root);
    return 0;
}

// LEETCODE:
// vector<vector<int>> levelOrder(TreeNode *root)
// {
//     vector<vector<int>> ans;
//     if (root == NULL)
//         return ans;
//     queue<TreeNode *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int Qsize = q.size();
//         vector<int> currAns;
//         for (int i = 0; i < Qsize; i++)
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             currAns.push_back(temp->val);
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         ans.push_back(currAns);
//     }
//     return ans;
// }