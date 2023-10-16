#include <iostream>
#include <vector>
using namespace std;
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    int findLength(ListNode *head)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            temp = temp->next;
            len++;
        }
        return len;
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = slow;
        int len = findLength(head);
        if (len == 1)
        {
            return nullptr;
        }
        while (fast != nullptr)
        {
            fast = fast->next;
            // prev = fast;
            if (fast != nullptr)
            {
                prev = slow;
                fast = fast->next;
                slow = slow->next;
            }
        }
        prev->next = slow->next;
        slow->next = nullptr;
        delete slow;
        return head;
    }
};
int main()
{

    return 0;
}