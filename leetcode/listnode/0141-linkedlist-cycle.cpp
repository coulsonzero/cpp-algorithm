/**
 * input ：head = [3,2,0,-4], pos = 1
 * output：true
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) return true;
        }
        return false;
    }
};



class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto fast = head, slow = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};




