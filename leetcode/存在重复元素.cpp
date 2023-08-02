/**
 * 输入：nums = [1,2,3,1]
 * 输出：true
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};
