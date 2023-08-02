/**
 * Leetcode 2544. 交替数字和
 * 给你一个正整数n。n中的每一位数字都会按下述规则分配一个符号：
 * 最高有效位上的数字分配到正号, 剩余每位上数字的符号都与其相邻数字相反, 返回所有数字及其对应符号的和。
 * Input: n = 521
 * Output: 4
 * Explanation: (+5) + (-2) + (+1) = 4.
 */


class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        string s = to_string(n);
        for (int i = 0; i < s.size(); ++i) {
            int t = s[i]-'0';
            ans += (i % 2 == 0) ? t : -t;
        }
        return ans;
    }
};



// 执行用时： 0 ms, 在所有 C++ 提交中击败了 100.00%的用户
// 内存消耗：5.9 MB, 在所有 C++ 提交中击败了 29.64%的用户

