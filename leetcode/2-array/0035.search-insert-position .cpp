/**
 * Input: nums = [1,3,5,6], target = 5
 * Output: 2
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] >= target) return i;
        }
        return n;
    }
};


// 二分查找
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return l;
    }
};