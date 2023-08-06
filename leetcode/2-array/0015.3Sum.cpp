#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            // dup!
            if (i != 0 && nums[i] == nums[i-1]) continue;
            for (int j = i + 1; j < n; j++) {
                // dup!
                if (j != i + 1 && nums[j] == nums[j - 1]) continue;
                int k = lower_bound(nums.begin()+j+1, nums.end(), -nums[i]-nums[j])-nums.begin();
                if (k != n && nums[i]+nums[j]+nums[k] == 0)
                    ans.push_back({nums[i], nums[j], nums[k]});
            }
        }
        return ans;
    }
};

//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> ans;
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        for (int i = 0; i < n; ++i) {
//            if (i != 0 && nums[i] == nums[i-1]) continue;   // dup!
//            for (int j = i+1; j < n; ++j) {
//                if (j != i+1 && nums[j] == nums[j-1]) continue;     // dup!
//                for (int k = j+1; k < n; ++k) {
//                    if (k != j+1 && nums[k] == nums[k-1]) continue;     // dup!
//                    if (nums[i]+nums[j]+nums[k] == 0) {
//                        ans.push_back({nums[i], nums[j], nums[k]});
//                    }
//                }
//            }
//        }
//        return ans;
//    }
//};

int main() {
    Solution *ptr = new Solution();
    vector<int> nums = {-1,0,1,2,-1,-4};
    auto ans = ptr->threeSum(nums);

}