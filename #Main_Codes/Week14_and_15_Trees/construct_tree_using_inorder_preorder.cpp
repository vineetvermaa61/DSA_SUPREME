// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };
// void level_order_traversal(Node *root)
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

// int findPosition(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// // BUILD TREE FROM INORDER PREORDER TRAVERSAL:
// Node *buildTreeFromInorderPreorder(int inorder[], int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd)
// {
//     // base case:
//     if (preIndex > size || inorderStart > inorderEnd)
//     {
//         return NULL;
//     }
//     // Step A:
//     int element = preorder[preIndex++];
//     Node *root = new Node(element);
//     int position = findPosition(inorder, size, element);
//     // Step B: root->left solve
//     root->left = buildTreeFromInorderPreorder(inorder, preorder, size, preIndex, inorderStart, position - 1);
//     // Step c: root->right solve
//     root->right = buildTreeFromInorderPreorder(inorder, preorder, size, preIndex, position + 1, inorderEnd);
//     return root;
// }
// int main()
// {
//     // int inorder[] = {40, 20, 50, 10, 60, 30, 70};
//     // int preorder[] = {10, 20, 40, 50, 30, 60, 70};
//     // int inorder[] = {3, 1, 4, 5, 2};
//     // int preorder[] = {5, 1, 3, 4, 2};
//     int inorder[] = {20, 10, 40, 30, 50};
//     int preorder[] = {10, 20, 30, 40, 50};
//     int size = sizeof(inorder) / sizeof(int);
//     // cout << size;
//     int preIndex = 0;
//     int inorderStart = 0;
//     int inorderEnd = size - 1;
//     cout << "Building Tree: " << endl;
//     Node *root = buildTreeFromInorderPreorder(inorder, preorder, size, preIndex, inorderStart, inorderEnd);
//     cout << endl
//          << "Printing level order traversal: " << endl;
//     level_order_traversal(root);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void level_order_traversal(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
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
int findPosition(vector<int> &arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// BUILD TREE FROM INORDER PREORDER TRAVERSAL:
TreeNode *buildTreeFromInorderPreorder(vector<int> &preorder, vector<int> &inorder, int size, int &preIndex, int inorderStart, int inorderEnd)
{
    // base case:
    if (preIndex > size || inorderStart > inorderEnd)
    {
        return NULL;
    }
    // Step A:
    int element = preorder[preIndex++];
    TreeNode *root = new TreeNode(element);
    int position = findPosition(inorder, size, element);
    // Step B: root->left solve
    root->left = buildTreeFromInorderPreorder(preorder, inorder, size, preIndex, inorderStart, position - 1);
    // Step c: root->right solve
    root->right = buildTreeFromInorderPreorder(preorder, inorder, size, preIndex, position + 1, inorderEnd);
    return root;
}
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    int size = sizeof(inorder) / sizeof(int);
    int preIndex = 0;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    TreeNode *root = buildTreeFromInorderPreorder(preorder, inorder, size, preIndex, inorderStart, inorderEnd);
    return root;
}
int main()
{
    vector<int> inorder = {20, 10, 40, 30, 50};
    vector<int> preorder = {10, 20, 30, 40, 50};
    int size = inorder.size();
    int preIndex = 0;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    cout << "Building Tree: " << endl;
    TreeNode *root = buildTreeFromInorderPreorder(inorder, preorder, size, preIndex, inorderStart, inorderEnd);
    cout << endl
         << "Printing level order traversal: " << endl;
    level_order_traversal(root);
    return 0;
}