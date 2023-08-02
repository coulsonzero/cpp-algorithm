/**
 * 53. Maximum Subarray
 *
 * for example:
 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: 6
 * Explanation: The subarray [4,-1,2,1] has the largest sum 6.
 *
 * Input: nums = [5,4,-1,7,8]
 * Output: 23
 * Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        for (auto &v : nums) {
            sum = sum > 0 ? sum + v : v;
            ans = max(ans, sum);
        }
        return ans;
    }
};




class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        for (auto &v : nums) {
            sum += v;
            ans = max(sum, ans);
            if (sum < 0) sum = 0;
        }
        return ans;
    }
};