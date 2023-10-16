#include <iostream>
#include <vector>
using namespace std;
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        if (head->next == nullptr)
        {
            return head;
        }
        // >1 node hai LL mein
        ListNode *curr = head;
        while (curr != nullptr)
        {
            // equal
            if ((curr->next != nullptr) && (curr->val == curr->next->val))
            {
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                temp->next = nullptr;
                delete temp;
            }
            else
            {
                // not equal
                curr = curr->next;
            }
        }
        return head;
    }
};
int main()
{

    return 0;
}