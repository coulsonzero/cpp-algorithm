/**
 * [两数之和2](https://leetcode.cn/problems/two-sum-ii-input-2-array-is-sorted/)
 * 输入：numbers = [2,7,11,15], target = 9
 * 输出：[1,2]
 * 解释：2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。返回 [1, 2]
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while (l < r) {
            while (l < r && numbers[l] + numbers[r] > target) r--;
            while (l < r && numbers[l] + numbers[r] < target) l++;
            if (numbers[l] + numbers[r] == target)
                return {l+1, r+1};
        }
        return {};
    }
};




class Solution2 {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum > target) {
                r--;
            } else if (sum < target) {
                l++;
            } else {
                return {l+1, r+1};
            }
        }
        return {};
    }
};