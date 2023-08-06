/**
 * 160. Intersection of Two Linked Lists
 * @link: https://leetcode.cn/problems/intersection-of-two-linked-lists/description/
 * Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
 * Output: Intersected at '8'
 *
 */

#include "listnode.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1 = headA;
        ListNode* h2 = headB;

        while (h1 != h2) {
            h1 = h1->next;
            h2 = h2->next;

            if (h1 == nullptr && h2 == nullptr) break;
            if (h1 == nullptr) h1 = headB;
            if (h2 == nullptr) h2 = headA;
        }

        return h1;
    }
};


int main() {
    auto *ptr = new Solution();
//    ListNode* listA = {4,1,8,4,5};
//    ListNode* listB = {5,6,1,8,4,5};
//    ptr->getIntersectionNode(listA, listB);

    return 0;
}