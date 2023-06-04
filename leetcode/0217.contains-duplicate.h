#ifndef CONTAINS_DUPLICATE_H
#define CONTAINS_DUPLICATE_H

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) return true;
        }
        return false;
    }
};

#endif //CONTAINS_DUPLICATE_H


