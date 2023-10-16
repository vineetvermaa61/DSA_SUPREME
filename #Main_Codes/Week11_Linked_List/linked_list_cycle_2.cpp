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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr)
        {
            fast = fast->next;
            if (fast != nullptr)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if (slow == fast)
            {
                slow = head;
                break;
            }
        }
        if (fast == nullptr)
        {
            return nullptr;
        }
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
int main()
{

    return 0;
}