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

// TOP View::
void printTopView(Node *root)
{
    if (root == NULL)
        return;
    // creating a map to store horizontal distance corresponding to topNode data
    map<int, int> topNode;
    // Level order
    // we will make a pair consisting of Node and Horizontal distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int horizontalDistance = temp.second;
        // jo bhi horizontal distance aya hai, check for that horizontal distance if answer exist or not
        if (topNode.find(horizontalDistance) == topNode.end())
        {
            topNode[horizontalDistance] = frontNode->data;
        }
        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, horizontalDistance - 1));
        }
        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, horizontalDistance + 1));
        }
    }
    // ab aapka answer map mein stored hoga

    cout << "Printing the top view: " << endl;
    for (auto i : topNode)
    {
        cout << i.first << " -> " << i.second << endl;
    }
}
int main()
{
    Node *root = buildTree();
    printTopView(root);
    return 0;
}