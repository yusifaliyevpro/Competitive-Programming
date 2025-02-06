// 141. Linked List Cycle
// https://leetcode.com/problems/linked-list-cycle/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *f = head;
        ListNode *s = head;

        while (f != nullptr && f->next != nullptr)
        {
            f = f->next->next;
            s = s->next;
            if (f == s)
                return true;
        }
        return false;
    }
};