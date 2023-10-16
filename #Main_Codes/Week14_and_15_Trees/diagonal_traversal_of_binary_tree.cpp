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
vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        while (temp)
        {
            ans.push_back(temp->data);
            if (temp->left)
            {
                //   baad mein dekhte hain
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return ans;
}
int main()
{

    return 0;
}