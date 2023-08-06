/**
 * Input: nums = [9,6,4,2,3,5,7,0,1]
 * Output: 8
 * Input: nums = [0,1]
 * Output: 2
 */


#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) return i;
        }
        return n;
    }
};
