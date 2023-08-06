/**
 * Leetcode 209. Minimum Size Subarray Sum
 *
 * for example:
 * Input: target = 7, nums = [2,3,1,2,4,3]
 * Output: 2
 * Explanation: The subarray [4,3] has the minimal length under the problem constraint.
 * Input: target = 4, nums = [1,4,4]
 * Output: 1
 * Input: target = 11, nums = [1,1,1,1,1,1,1,1]
 * Output: 0
 */


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int sum = 0;
        int ans = 0;
        for (int r = 0; r < nums.size(); ++r) {
            sum += nums[r];
            while (target <= sum) {
                ans = ans == 0 ? r - l + 1 : min(r - l + 1, ans);
                sum -= nums[l++];
            }
        }
        return ans;
    }
};





class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int sum = 0;
        int ans = INT_MAX;
        for (int r = 0; r < nums.size(); ++r) {
            sum += nums[r];
            while (target <= sum) {
                ans = min(r - l + 1, ans);
                sum -= nums[l++];
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};