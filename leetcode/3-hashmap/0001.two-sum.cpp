#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// 执行用时：  4 ms, 在所有 C++ 提交中击败了99.26%的用户
// 内存消耗：10.5MB, 在所有 C++ 提交中击败了42.39%的用户
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int num = target - nums[i];
            if (map.find(num) != map.end()) {
                {return {map[num], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};



//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> map;
//        for (int i = 0; i < nums.size(); ++i) {
//            if (map.find(target - nums[i]) != map.end()) {
//                return vector<int> {map[target-nums[i]], i};
//            }
//            map[nums[i]] = i;
//        }
//        return vector<int> {};
//    }
//};

