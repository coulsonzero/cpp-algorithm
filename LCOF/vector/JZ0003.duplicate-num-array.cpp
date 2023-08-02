// -*- C++ -*-
/******************************************************
 * JZ Offer 03. duplicated number of aray             *
 * input: [2, 3, 1, 0, 2, 5, 3]                       *
 * output: 2 or 3                                     *
 ******************************************************/

#include <vector>
using namespace std;

// method-1: sort array
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) return nums[i];
        }
        return -1;
    }
};


// method-2: hashmap
/*
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto& v : nums) {
            if (map[v] == 1) return v;
            map[v]++;
        }
        return -1;
    }
};
*/