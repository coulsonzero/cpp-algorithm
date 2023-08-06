#include <iostream>
#include <vector>

using namespace std;


/**
 * 1262. Greatest Sum Divisible by Three
 * Input: nums = [3,6,5,1,8]
 * Output: 18
 * Input: nums = [1,2,3,4,4]
 * Output: 12
 */

class Solution {
public:
    int maxSumDivThree(vector<int>& A) {
        vector<int> dp = {0, INT_MIN, INT_MIN};
        for (int a : A) {
            vector<int> dp2 = {0, 0, 0};
            for (int i = 0; i < 3; ++i)
                dp2[(i + a) % 3] = max(dp[(i + a) % 3], dp[i] + a);
            dp = dp2;
        }
        return dp[0];
    }
};


int main() {
    vector<int> nums = {3, 6, 5, 1, 8};
    Solution *ptr = new Solution();
    auto res = ptr->maxSumDivThree(nums);
    cout << res;
    // output: 18

    return 0;
}


