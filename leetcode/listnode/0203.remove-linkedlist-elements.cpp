/**
 * 203. Remove Linked List Elements
 * @link: https://leetcode.cn/problems/remove-linked-list-elements/description/
 * Input: head = [1,2,6,3,4,5,6], val = 6
 * Output: [1,2,3,4,5]
 */

// 递归
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;
        head->next = removeElements(head->next, val);

        return head->val == val ? head->next : head;
    }
};



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre = new ListNode(0, head);
        ListNode* cur = pre;
        while (cur->next) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return pre->next;
    }
};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre = new ListNode(0, head);
        head = pre;
        while (head->next) {
            if (head->next->val == val) {
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }
        return pre->next;
    }
};