/*
 * Leetcode 41. First Missing Positive
 * Given an unsorted integer array nums, return the smallest missing positive integer.
 *
 * for example:
 * Input: nums = [1,2,0]         Output: 3
 * Input: nums = [3,4,-1,1]      Output: 2
 * Input: nums = [7,8,9,11,12]   Output: 1
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        for (auto& it : nums) {
            if (it == ans) ans++;
        }
        return ans;
    }
};

