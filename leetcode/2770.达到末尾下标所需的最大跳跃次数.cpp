/**
 * 给你一个下标从 0 开始、由 n 个整数组成的数组 nums 和一个整数 target 。
 * 你的初始位置在下标 0 。在一步操作中，你可以从下标 i 跳跃到任意满足下述条件的下标
 * j ：0 <= i < j < n        -target <= nums[j] - nums[i] <= target
 * 返回到达下标 n - 1 处所需的 最大跳跃次数. 如果无法到达下标 n - 1 ，返回 -1 。
 *
 * for example:
 * 输入：nums = [1,3,6,4,1,2], target = 2
 * 输出：3
 * 解释：要想以最大跳跃次数从下标 0 到下标 n - 1 ，可以按下述跳跃序列执行操作：
 * - 从下标 0 跳跃到下标 1 。
 * - 从下标 1 跳跃到下标 3 。
 * - 从下标 3 跳跃到下标 5 。
 *
 * 输入：nums = [1,3,6,4,1,2], target = 3
 * 输出：5
 * 解释：要想以最大跳跃次数从下标 0 到下标 n - 1 ，可以按下述跳跃序列执行操作：
 * - 从下标 0 跳跃到下标 1 。
 * - 从下标 1 跳跃到下标 2 。
 * - 从下标 2 跳跃到下标 3 。
 * - 从下标 3 跳跃到下标 4 。
 * - 从下标 4 跳跃到下标 5 。
 *
 * 输入：nums = [1,3,6,4,1,2], target = 0
 * 输出：-1
 */

class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = 0;
        for (int i = 0; i < n; ++i) {
            if (dp[i] == -1) continue;
            for (int j = i+1; j < n; ++j) {
                if (abs(nums[j] - nums[i]) <= target) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }
        return dp[n-1];
    }
};