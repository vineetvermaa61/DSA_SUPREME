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

class NodeData
{
public:
    int size;
    int minVal;
    int maxVal;
    bool isValid;
    // EDGE CASE:
    NodeData()
    {
    }
    NodeData(int size, int max, int min, bool valid)
    {
        this->size = size;
        minVal = min;
        maxVal = max;
        isValid = valid;
    }
};
NodeData *findLargestBST(Node *root, int &ans)
{
    if (root == NULL)
    {
        NodeData *temp = new NodeData(0, INT_MIN, INT_MAX, true);
        return temp;
    }
    NodeData *leftAns = findLargestBST(root->left, ans);
    NodeData *rightAns = findLargestBST(root->right, ans);
    NodeData *currNodeAns = new NodeData();
    currNodeAns->size = leftAns->size + rightAns->size + 1;
    currNodeAns->minVal = min(root->data, leftAns->minVal);
    currNodeAns->maxVal = max(root->data, rightAns->maxVal);
    if (leftAns->isValid && rightAns->isValid &&
        (root->data > leftAns->maxVal && root->data < rightAns->minVal))
    {
        currNodeAns->isValid = true;
    }
    else
    {
        currNodeAns->isValid = false;
    }
    if (currNodeAns->isValid)
    {
        ans = max(ans, currNodeAns->size);
    }
    return currNodeAns;
}
int main()
{
    Node *root = new Node(5);
    Node *first = new Node(2);
    Node *second = new Node(4);
    Node *third = new Node(1);
    Node *fourth = new Node(3);
    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;

    level_order_traversal(root);
    int ans = 0;
    findLargestBST(root, ans);
    cout << endl
         << "Larget BST ka size: " << ans << endl;
    return 0;
}