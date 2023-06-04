// -*- C++ -*-
/******************************************************
 * JZ Offer 24. reverse listnode                      *
 * input:  1 -> 2 -> 3 -> 4 -> 5 -> NULL              *
 * output: 5 -> 4 -> 3 -> 2 -> 1 -> NULL              *
 ******************************************************/


#include <iostream>
#include <vector>
#include "listnode.h"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = nullptr, *cur = head;
        while(cur != nullptr) {
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};