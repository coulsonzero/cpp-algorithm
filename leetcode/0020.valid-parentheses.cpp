/**
 * Leetcode 20. Valid Parentheses
 * @difficulty: simple
 * @link: https://leetcode.cn/problems/valid-parentheses/
 *
 * for example:
 * Input: s = "()[]{}"      Output: true
 * Input: s = "(]"          Output: false
 */

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (auto & c : s) {
            if (c == '(') st.push(')');
            else if (c == '[') st.push(']');
            else if (c == '{') st.push('}');
            else if (st.empty() || c != st.top()) return false;
            else st.pop();
        }
        return st.empty();
    }
};


int main() {
    Solution *ptr = new Solution();
    cout << boolalpha;
    cout << ptr->isValid("()[]{}") << endl;      // true
    cout << ptr->isValid("(]") << endl;          // false
    cout << ptr->isValid("()") << endl;          // true

    delete ptr;
    return 0;
}