#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, start = 0, n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] != nums[i]) {
                ans += start * (i - start + 1) * (n - 1 - i);
                start = i + 1;
            }
        }
        return ans;
    }
};


class Solution2 {
public:
    int unequalTriplets(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                for(int k = j + 1; k < nums.size(); ++k) {
                    if(nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]) {
                        num++;
                    }
                }
            }
        }
        return num;
    }
};


int main() {
    vector<int> nums = {4, 4, 2, 4, 3};
    auto *ptr = new Solution();
    auto res = ptr->unequalTriplets(nums);
    cout << res;
    // output: 3
    
    return 0;
}