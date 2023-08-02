#include "listnode.h"

class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (!head) return nullptr;
        if (head->val == val) return head->next;
        head->next = deleteNode(head->next,val);
        return head;
    }
};


/*
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (head->val == val) return head->next;
        ListNode *pre = head;
        ListNode *cur = head->next;
        while (cur != nullptr && cur->val != val){
            pre = cur;
            cur = cur->next;
        }
        if (cur != nullptr) pre->next = cur->next;
        return head;
    }
};
 */

/**
 * 输入: head = [4,5,1,9], val = 5
 * 输出: [4,1,9]
 */