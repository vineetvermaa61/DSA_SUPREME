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
class Solution
{
public:
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int sum(Node *root)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
        {
            // its a leaf node
            // node ka data store kiya
            int temp = root->data;
            // leaf node ko 0 kiya
            root->data = 0;
            // data return ka diya
            return temp;
        }
        // recursive calls ki last tak jane ke liye
        int leftSum = sum(root->left);
        int rightSum = sum(root->right);
        // present root ka data store kiya
        int temp = root->data;
        // us root ke data ko left aur right subtree ke sum ke equal kiya
        root->data = leftSum + rightSum;
        // us root ke data + left aur right subtree ke sum ko return kiya => ye naya leftSum/rightSum hoga
        return root->data + temp;
    }
    void toSumTree(Node *node)
    {
        sum(node);
    }
};
int main()
{

    return 0;
}