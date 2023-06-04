#include <vector>
using namespace std;

#ifndef FIND_PIVOT_INDEX_H
#define FIND_PIVOT_INDEX_H


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_l = 0;
        int sum_r = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            sum_r -= nums[i];
            if (sum_l == sum_r) return i;
            sum_l += nums[i];
        }
        return -1;
    }
};

#endif //FIND_PIVOT_INDEX_H
