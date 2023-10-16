#include <iostream>
#include <vector>
#include <map>
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
    cout << "Enter data ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for left part part of " << data << " node: " << endl;
    root->left = buildTree();
    cout << "Enter the data for right part part of " << data << " node: " << endl;
    root->right = buildTree();
    return root;
}

// Boundary Traversal:
// 10 20 30 -1 -1 50 70 90 -1 -1 80 -1 -1 60 -1 -1 40 -1 100 -1 120 100 -1 -1 130 -1 -1
void printLeftBoundary(Node *root)
{
    // base case
    // if root is null, then go back
    if (root == NULL)
        return;
    // if root is leaf node then go back
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << " ";
    if (root->left)
    {
        printLeftBoundary(root->left);
    }
    else
    {
        printLeftBoundary(root->right);
    }
}
void printLeafBoundary(Node *root)
{
    // base case
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}
void printRightBoundary(Node *root)
{
    // base case
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right)
    {
        printRightBoundary(root->right);
    }
    else
    {
        printRightBoundary(root->left);
    }
    cout << root->data << " ";
}
void boundaryTraversal(Node *root)
{
    // base case
    if (root == NULL)
        return;

    // single node case:
    // if(root->left == NULL && root->right == NULL){
    //     ans.push_back(root->data);
    //     return ans;
    // }

    cout << root->data << " ";
    // printing left boundary
    printLeftBoundary(root->left);
    // printing leaf boundary
    printLeafBoundary(root);
    // printing right boundary
    printRightBoundary(root->right);
}
int main()
{
    Node *root = buildTree();
    cout << "Printing Boundary Traversal: " << endl;
    boundaryTraversal(root);
    return 0;
}

// GFG:

// class Solution {
// public:
//     void printLeftBoundary(Node *root, vector<int>& ans)
// {
//     // base case
//     // if root is null, then go back
//     if (root == NULL)
//         return;
//     // if root is leaf node then go back
//     if (root->left == NULL && root->right == NULL)
//     {
//         return;
//     }
//     // cout << root->data << " ";
//     ans.push_back(root->data);
//     if (root->left)
//     {
//         printLeftBoundary(root->left, ans);
//     }
//     else
//     {
//         printLeftBoundary(root->right, ans);
//     }
// }
// void printLeafBoundary(Node *root, vector<int>& ans)
// {
//     // base case
//     if (root == NULL)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         // cout << root->data << " ";
//         ans.push_back(root->data);
//     }
//     printLeafBoundary(root->left, ans);
//     printLeafBoundary(root->right, ans);
// }
// void printRightBoundary(Node *root, vector<int>& ans)
// {
//     // base case
//     if (root == NULL)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         return;
//     }
//     if (root->right)
//     {
//         printRightBoundary(root->right, ans);
//     }
//     else
//     {
//         printRightBoundary(root->left, ans);
//     }
//     // cout << root->data << " ";
//     ans.push_back(root->data);
// }
// vector <int> boundary(Node *root)
// {
//     vector<int> ans;
//     // base case
//     if (root == NULL)
//         return ans;
//     if(root->left == NULL && root->right == NULL){
//         ans.push_back(root->data);
//         return ans;
//     }

//     // cout << root->data << " ";
//     ans.push_back(root->data);
//     // printing left boundary
//     printLeftBoundary(root->left, ans);
//     // printing leaf boundary
//     printLeafBoundary(root, ans);
//     // printing right boundary
//     printRightBoundary(root->right, ans);
//     return ans;
// }
// };