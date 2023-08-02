/**
 * 输入：nums = [2,2,1]
 * 输出：1
 */

class Solution {
public:

};

class Solution {
public:
    /* hashmap */
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]]++;
        }

        for (auto& iter : map) {
            if (iter.second == 1)
                return iter.first;
        }
        return -1;
    }

    /* reduce */
//    int singleNumber(vector<int>& nums) {
//        int reduce = 0;
//        for (int num : nums) {
//            reduce =  reduce ^ num;
//        }
//        return reduce;
//    }

    /* C++ 17 */
//    int singleNumber(vector<int>& nums) {
//        return std::accumulate(nums.begin(), nums.end(), 0, std::bit_xor<int>());
//    }
};

