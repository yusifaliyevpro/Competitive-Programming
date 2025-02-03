// 21. Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/

#include <iostream>
using namespace std;

// It is my first ListNode structure work. So i looked at some resoureces. I understood the code.
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list1 || !list2)
            return list1 ? list1 : list2;

        if (list1->val > list2->val)
            swap(list1, list2);

        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};