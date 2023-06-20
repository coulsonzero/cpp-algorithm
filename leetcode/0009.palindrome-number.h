#ifndef PALINDROME_NUMBER_H
#define PALINDROME_NUMBER_H

/**
 * Input: x = 121
 * Output: true
 * Input: x = -121
 * Output: false
 */


class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int l = 0, r = s.size()-1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
};

#endif //PALINDROME_NUMBER_H


