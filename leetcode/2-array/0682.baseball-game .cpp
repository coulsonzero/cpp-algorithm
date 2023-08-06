class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;
        for (auto v : operations) {
            if (v == "C") {
                nums.pop_back();
            } else if (v == "D") {
                nums.push_back(nums.back() * 2);
            } else if (v == "+") {
                nums.push_back(nums[nums.size()-2] + nums.back());
            } else {
                nums.push_back(stoi(v));
            }
        }
        int ans = 0;
        for (auto v : nums) {
            ans += v;
        }
        return ans;
    }
};


class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;
        for (auto v : operations) {
            if (v == "C") {
                nums.pop_back();
            } else if (v == "D") {
                nums.push_back(nums.back() * 2);
            } else if (v == "+") {
                nums.push_back(nums[nums.size()-2] + nums.back());
            } else {
                nums.push_back(stoi(v));
            }
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};