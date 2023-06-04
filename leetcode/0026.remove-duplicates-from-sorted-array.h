#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) nums[++j] = nums[i];
        }
        return ++j;
    }
};


#endif //REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H


/**
 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
 * Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
 */

