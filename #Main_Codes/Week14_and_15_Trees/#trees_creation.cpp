#include <iostream>
#include <vector>
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
int main()
{
    Node *root = NULL;
    root = buidTree();
    return 0;
}