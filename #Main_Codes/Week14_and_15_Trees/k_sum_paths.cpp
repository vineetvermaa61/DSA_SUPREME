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
// *********************************PATH SUM-3*****************************************
int ans = 0;
void pathFromOneRoot(Node *root, long long sum)
{
    if (root == NULL)
        return;
    if (sum == root->data)
    {
        ans++;
    }
    pathFromOneRoot(root->left, sum - root->data);
    pathFromOneRoot(root->right, sum - root->data);
}
int pathSum(Node *root, int targetSum)
{
    if (root)
    {
        pathFromOneRoot(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);
    return 0;
}

#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure.

    class BinaryTreeNode {
        public :
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }
    };

*************************************************************/

void pathFromOneRoot(BinaryTreeNode<int> *root, long long sum, vector<int> path, vector<vector<int>> &ans)
{
    if (root == NULL)
        return;
    if (sum == root->data)
    {
        path.push_back(root->data);
        ans.push_back(path);
    }

    path.push_back(root->data);
    pathFromOneRoot(root->left, sum - root->data, );
    pathFromOneRoot(root->right, sum - root->data);
    path.pop_back();
}
vector<vector<int>> kPathSum(BinaryTreeNode<int> *root, int k)
{
    vector<vector<int>> ans;
    vector<int> path;
    if (root)
    {
        pathFromOneRoot(root, k, path, ans);
        kPathSum(root->left, k);
        kPathSum(root->right, k);
    }
    return ans;
}