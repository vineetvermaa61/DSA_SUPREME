#include <iostream>
#include <vector>
using namespace std;
//  Definition of linked list:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *addOne(Node *head)
{
    Node *head1 = reverse(head);
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;
    int sum = 0;
    while (head1 != NULL)
    {
        if (ansTail == NULL)
        {
            sum = head1->data + 1 + carry;
            // cout << "if" << endl;
        }
        else
        {
            sum = head1->data + carry;
            // cout << "else" << endl;
        }
        // cout << "sum " << sum << endl;
        int digit = sum % 10;
        cout << "digit " << digit << endl;
        carry = sum / 10;
        // cout << "carry " << carry << endl;
        Node *newNode = new Node(digit);
        if (ansTail == NULL)
        {
            ansTail = newNode;
            ansHead = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    Node *ans = reverse(ansHead);
    return ans;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    first->next = second;
    second->next = third;

    Node *head = first;
    print(head);
    Node *ans = addOne(head);
    print(ans);
    return 0;
}