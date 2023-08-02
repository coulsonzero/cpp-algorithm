#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        map[nums[i]]++;
    }

    for (auto &iter : map) {
        if (iter.second == 1)
            return iter.first;
    }
    return -1;
}


int main() {
    std::cout << "========== Solution ==========" << std::endl;

    vector<int> nums = {1,2,4,1,2};
    cout << singleNumber(nums) << endl;

    std::cout << "==========   End    ==========" << std::endl;
    return 0;
}





