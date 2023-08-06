/**
 * 34. Find First and Last Position of Element in Sorted Array
 *
 * for example:
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 * Input: nums = [5,7,7,8,8,10], target = 6
 * Output: [-1,-1]
 */



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                ans[0] = i;
                break;
            }
        }

        for (int i = nums.size()-1; i >= 0; --i) {
            if (nums[i] == target) {
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int l = 0;
        int r = nums.size()-1;
        while (l <= r && nums[l] < target) l++;
        while (l <= r && nums[r] > target) r--;
        if (l > r) return ans;
        ans[0] = l;
        ans[1] = r;
        return ans;
    }
};


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (start == -1 && nums[i] == target) {
                start = i;
            }
            if (nums[i] == target) {
                end = i;
            }
        }
        return vector<int> {start, end};
    }
};

// 二分搜索
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = binary_search(nums, target);
        int r = binary_search(nums, target + 1) - 1;
        if (l > r) return {-1, -1};
        return {l, r};
    }

    int binary_search(vector<int> &nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) >> 1;
            if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }
};