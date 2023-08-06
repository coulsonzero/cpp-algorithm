

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set <double> ans;
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size()-1;
        while (l < r) {
            // `/`除法默认不保留小数点, 需要使用1.0*或者static_cast<double>
            double t = 1.0 * (nums[l++] + nums[r--]) / 2;
            ans.insert(t);
        }
        return ans.size();
    }
};

