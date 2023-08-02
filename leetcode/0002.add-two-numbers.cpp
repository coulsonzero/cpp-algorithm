class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + carry;
            if (!head) {
                head = tail = new ListNode(sum % 10);
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            carry = sum / 10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry > 0) tail->next = new ListNode(carry);
        return head;
    }
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int flg = 0) {
        if (!flg && (!l1 || !l2)) return l1 ? l1 : l2;
        if (!l1 && l2) swap(l1, l2);
        l1 = l1 ? l1 : new ListNode();
        l1->val += flg + (l2 ? l2->val : 0);
        l1->next = addTwoNumbers(l1->next, l2 ? l2->next : nullptr, l1->val > 9);
        l1->val %= 10;
        return l1;
    }
};