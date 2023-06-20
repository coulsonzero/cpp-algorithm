#include <iostream>
#include "library/array.h"
#include "leetcode/2465.number-of-distinct-averages.h"

using namespace std;


int main() {
    std::cout << "========== Solution ==========" << std::endl;
    auto *ptr = new Solution();


    vector<int> nums = {9,5,7,8,7,9,8,2,0,7};
    vector<int> nums2 = {4,1,4,0,3,5};
    auto res = ptr->distinctAverages(nums);   // 5
    auto res2 = ptr->distinctAverages(nums2); // 2



    cout << res2 << endl;
    std::cout << "==========   End    ==========" << std::endl;
    return 0;
}





