/*
 * 27. Remove Element
 * Input: nums = [0,1,2,2,3,0,4,2], val = 2
 * Output: 5, nums = [0,1,4,0,3,_,_,_]
 */

#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size();
        while (l < r) {
            nums[l] == val ? nums[l] = nums[--r] : l++;
        }
        return l;
    }
};

