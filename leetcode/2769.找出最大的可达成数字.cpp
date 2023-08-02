/**
 * Leetcode 2769 Find the Maximum Achievable Number
 * Input: num = 4, t = 1          Output: 6
 * Input: num = 3, t = 2          Output: 7
 */

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + (t * 2);
    }
};