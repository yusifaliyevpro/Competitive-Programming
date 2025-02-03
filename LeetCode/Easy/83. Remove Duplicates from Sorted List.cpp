// 83. Remove Duplicates from Sorted List
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode *next;
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *res = head;
        while (head && head->next)
        {
            if (head->val == head->next->val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        return res;
    }
};