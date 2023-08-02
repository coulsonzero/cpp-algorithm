/**
 * Leetcode 4. Median of Two Sorted Arrays
 *
 * for example:
 * Input: nums1 = [1,3], nums2 = [2]
 * Output: 2.00000
 * Explanation: merged array = [1,2,3] and median is 2.
 *
 * Input: nums1 = [1,2], nums2 = [3,4]
 * Output: 2.50000
 * Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto v : nums2) {
            nums1.push_back(v);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if (n & 1 == 1) return 1.00000 * nums1[n/2];
        return 1.00000 * (nums1[n/2 - 1] + nums1[n/2]) / 2;
    }
};

