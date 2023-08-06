#include <iostream>
using namespace std;

//struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
//};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur = head;
        while(cur != nullptr && cur->next != nullptr) {
            if(cur->val == cur->next->val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};


//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode *p = head;
//        while (p && p->next) {
//            if (p->val == p->next->val) {
//                ListNode *del = p->next;
//                p->next = p->next->next;
//                delete del;
//            } else {
//                p = p->next;
//            }
//        }
//        return head;
//    }
//};


int main() {
    struct ListNode node3 = {1, nullptr};
    struct ListNode node2 = {1, &node3};
    struct ListNode head  = {1, &node2};
    auto *p = new Solution();
    p->deleteDuplicates(&head);
    cout << head;
}