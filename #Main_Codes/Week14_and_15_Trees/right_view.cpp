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

// Right View:
void printRightView(Node *root, int level, vector<int> &ans)
{
    // base case
    if (root == NULL)
        return;

    if (level == ans.size())
        ans.push_back(root->data);

    // right call
    printRightView(root->right, level + 1, ans);
    // left call
    printRightView(root->left, level + 1, ans);
}
int main()
{
    Node *root = buildTree();
    vector<int> ans;
    int level = 0;
    printRightView(root, level, ans);
    cout << "Printing right view: " << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}