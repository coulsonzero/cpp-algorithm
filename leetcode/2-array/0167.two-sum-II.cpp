/**
 * 167. Two Sum II - Input Array Is Sorted
 * different: middle
 *
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * input: numbers = [2,3,4], target = 6
 * Output: [1,3]
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int l = 0, r = numbers.size() - 1; l < r;) {
            if (numbers[l] + numbers[r] == target)
                return {l + 1, r + 1};
            else if (numbers[l] + numbers[r] < target)
                l++;
            else
                r--;
        }
        return {};
    }
};


