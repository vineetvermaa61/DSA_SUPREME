#include <iostream>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    // int maxDepth(TreeNode *root)
    // {
    //     if (root == NULL)
    //         return 0;
    //     int leftHeight = maxDepth(root->left);
    //     int rightHeight = maxDepth(root->right);
    //     return max(leftHeight, rightHeight) + 1;
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
    //     if(root == NULL) return 0;
    //     int option1 = diameterOfBinaryTree(root -> left);
    //     int option2 = diameterOfBinaryTree(root -> right);
    //     int option3 = maxDepth(root -> left) + maxDepth(root -> right);
    //     return max (option1, max(option2, option3));
    // }
    int Diameter = 0;
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        // diameter
        int currDiameter = lh + rh;
        Diameter = max(Diameter, currDiameter);
        return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        return Diameter;
    }
};
int main()
{

    return 0;
}