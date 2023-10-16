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
TreeNode *buildTreeFromPostorderInorder(vector<int> &inorder, vector<int> &postorder, int size, int &postIndex, int inorderStart, int inorderEnd)
{
    // base case:
    if (postIndex < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    // Step A:
    int element = postorder[postIndex--];
    TreeNode *root = new TreeNode(element);
    int position = findPosition(inorder, size, element);
    // Step B: root->right solve
    root->right = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, position + 1, inorderEnd);
    // Step C: root->left solve
    root->left = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, inorderStart, position - 1);
    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int size = inorder.size();
    int postIndex = size - 1;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    TreeNode *root = buildTreeFromPostorderInorder(inorder, postorder, size, postIndex, inorderStart, inorderEnd);
    return root;
}
int main()
{
    vector<int> inorder = {40, 20, 10, 50, 30, 60};
    vector<int> postorder = {40, 20, 50, 60, 30, 10};
    cout << "Building Tree: " << endl;
    TreeNode *root = buildTree(inorder, postorder);
    cout << endl
         << "Printing level order traversal: " << endl;
    level_order_traversal(root);
    return 0;
}