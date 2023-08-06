/**
 * 6953. 判断是否能拆分数组
 * @link: https://leetcode.cn/problems/check-if-it-is-possible-to-split-array/description/
 * 输入：nums = [2, 2, 1], m = 4
 * 输出：true
 * 解释：
 * 第 1 步，将数组 nums 拆分成 [2, 2] 和 [1] 。
 * 第 2 步，将数组 [2, 2] 拆分成 [2] 和 [2] 。
 * 因此，答案为 true
 */


class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        if (n <= 2) return true;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] + nums[i + 1] >= m) return true;
        }
        return false;
    }
};