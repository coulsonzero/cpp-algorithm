#ifndef INTERSECTION_OF_TWO_ARRAYS_II_H
#define INTERSECTION_OF_TWO_ARRAYS_II_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hashmap;
        vector<int> res;
        for (auto it: nums1) hashmap[it]++;
        for (auto it: nums2) if (hashmap[it]-- > 0) res.push_back(it);
        return res;
    }
};

#endif //INTERSECTION_OF_TWO_ARRAYS_II_H

/**
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
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
                ans.push_back(a);
                i1++;
                i2++;
            }
        }
        return ans;
    }
};
 */