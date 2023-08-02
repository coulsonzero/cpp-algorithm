#include <iostream>
#include <stack>
#include <vector>
#include "listnode.h"

using namespace std;

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<int> stack;
        while (head != NULL) {
            stack.push(head->val);
            head = head->next;
        }

        vector<int> ans;
        while (!stack.empty()) {
            ans.push_back(stack.top());
            stack.pop();
        }

        return ans;
    }
};

// input ：head = [1,3,2]
// output：[2,3,1]




