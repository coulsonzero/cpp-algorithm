

#include <vector>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        vector<int>::iterator ite1 = nums1.begin(), ite2 = nums2.begin();
        while(ite1 != nums1.end() && ite2 != nums2.end()){
            if(*ite1 == *ite2){
                if(ans.size() == 0 || *ite1 != ans.back()) ans.push_back(*ite1);
                ite1++;
                ite2++;
            } else if (*ite1 < *ite2){
                ite1++;
            } else {
                ite2++;
            }
        }
        return ans;
    }
};


#endif //INTERSECTION_OF_TWO_ARRAYS_H

/**
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [9,4]
 * 执行结果：通过
 * 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
 * 内存消耗：9.6 MB, 在所有 C++ 提交中击败了98.09%的用户
 */


/**
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int n1 = nums1.size(), n2 = nums2.size();
        int i1 = 0, i2 = 0;
        while (i1 < n1 && i2 < n2) {
            int a = nums1[i1], b = nums2[i2];
            if (a < b) {
                i1++;
            } else if (a > b) {
                i2++;
            } else {
                if (ans.size() == 0 || a != ans.back()) ans.push_back(a);
                i1++;
                i2++;
            }
        }
        return ans;
    }
};
 */
