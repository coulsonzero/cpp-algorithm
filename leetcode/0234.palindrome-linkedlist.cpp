#include <iostream>
#include <vector>
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

        return ispalidrome_array(nums);
    }

    bool ispalidrome_array(vector<int> nums) {
        int l = 0;
        int r = nums.size()-1;
        while (l < r) {
            if (nums[l++] != nums[r--]) return false;
        }
        return true;
    }
};



int main() {
    struct ListNode node4 = {1, nullptr};
    struct ListNode node3 = {2, &node4};
    struct ListNode node2 = {2, &node3};
    struct ListNode head  = {1, &node2};

    auto *p = new Solution();
    cout << boolalpha << p->isPalindrome(&head);    // true

    delete p;
    return 0;
}