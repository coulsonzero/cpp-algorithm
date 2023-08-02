#include <iostream>
#include <vector>
using std::vector;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        for (int r = 1; r < nums.size(); ++r) {
            if (nums[l] != nums[r]) nums[++l] = nums[r];
        }
        return ++l;
    }
};


/**
 * Input : nums = [0,0,1,1,1,2,2,3,3,4]
 * Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
 */

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    auto *ptr = new Solution();
    auto res = ptr->removeDuplicates(nums);
    std::cout << res;
}

// output: 5





