
#include <vector>
using namespace std;

/********************************************************************
 * 2460. Apply Operations to an Array                               *
 * @Date: 06-05-2023 (m-d-y)                                        *
 *                                                                  *
 * Example                                                          *
 * Input: nums = [1,2,2,1,1,0]                                      *
 * Output: [1,4,2,0,0,0]                                            *
 ********************************************************************/



class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        moveZeroes(nums);
        return nums;
    }

    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j++]);
            }
        }
    }
};



