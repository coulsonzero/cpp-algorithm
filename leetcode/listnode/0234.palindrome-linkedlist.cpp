#include <iostream>
#include <vector>
#include <stack>
#include "listnode.h"

using namespace std;

//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        while (head != nullptr) {
            nums.push_back(head->val);
            head = head->next;
        }

        int l = 0, r = nums.size() - 1;
        while (l < r) {
            if (nums[l++] != nums[r--]) return false;
        }
        return true;
    }
};


// stack
class Solution3 {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;

        ListNode* p = head;
        while(head != nullptr) {
            st.push(head->val);
            head = head->next;
        }

        while (p != nullptr) {
            if (p->val != st.top()) return false;
            st.pop();
            p = p->next;
        }

        return true;
    }
};

// deque
class Solution2 {
public:
    bool isPalindrome(ListNode* head) {
        deque<int> q;

        while (head != nullptr) {
            q.push_back(head->val);
            head = head->next;
        }

        // if (q.size() == 1) return true;
        while (q.size() > 1) {
            if (q.front() != q.back()) return false;
            q.pop_front();
            q.pop_back();
        }

        return true;
    }
};



int main() {
    auto node4 = new ListNode(1, nullptr);
    auto node3 = new ListNode(2, node4);
    auto node2 = new ListNode(2, node3);
    auto head  = new ListNode(1, node2);

    auto *p = new Solution2();
    cout << boolalpha;
    cout << p->isPalindrome(head);    // true

    delete p;
    p = nullptr;
    return 0;
}
