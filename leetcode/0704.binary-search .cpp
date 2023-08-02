/**
 * 704. Binary Search
 * @link: https://leetcode.cn/problems/binary-search/description/
 *
 * for example:
 * Input: nums = [-1,0,3,5,9,12], target = 9
 * Output: 4
 * Input: nums = [-1,0,3,5,9,12], target = 2
 * Output: -1
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;    // 防溢出
            // int m = (l + r) >> 1;    // 防溢出
            // int m = (l + r) / 2;     // 可能会溢出
            if (nums[m] < target) {
                l = m + 1;
            } else if (nums[m] > target) {
                r = m - 1;
            } else {
                return m;
            }
        }
        return -1;
    }
};



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) >> 1;
            if (nums[m] < target) l = m + 1;
            else if (nums[m] > target) r = m - 1;
            else return m;
        }
        return -1;
    }
};