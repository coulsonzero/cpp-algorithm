/**
 * 输入: nums = [5,7,7,8,8,10], target = 8
 * 输出: 2
 * 输入: nums = [5,7,7,8,8,10], target = 6
 * 输出: 0
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int cnt = 0;
        for (auto &v : nums) {
            if (v == target)
                cnt++;
        }
        return cnt;
    }
};


//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        return count(nums.begin(), nums.end(), target);
//    }
//};

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    cout << count(nums.begin(), nums.end(), target);    // 2
}




