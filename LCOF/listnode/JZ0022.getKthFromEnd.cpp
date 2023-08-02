#include "listnode.h"

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        for (ListNode *fast = head; fast != nullptr; fast = fast->next) {
            if(k == 0) head = head->next;
            else k--;
        }
        return head;
    }
};

/*
 * 给定一个链表: 1->2->3->4->5, 和 k = 2.
 * 返回链表 4->5.
 */