// 解法一：排序取中位数
// 时间O(nlogn)，空间O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

// 解法二：建立哈希表法
// 时间O(n)，空间O(n/2)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> map;
        int n = nums.size();
        for (auto v : nums) {
            map[v]++;
            if (map[v] > n/2) return v;
        }
        return -1;
    }
};
