#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            if (nums[l] + nums[r] < target) l++;
            else if (nums[l] + nums[r] > target) r--;
            else return {nums[l], nums[r]};
        }
        return {};
    }
};

