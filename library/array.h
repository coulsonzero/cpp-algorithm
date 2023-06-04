#include <vector>
#include <numeric>
using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
// 打印数组元素
void print_array(vector<T>& vec);
// 数组求和
int sum_array(vector<int>& vec);
// 返回元素索引
template <typename T>
int find_array(vector<T>& vec, T element);

// copy
// vector<int> nums2;
// nums2.assign(nums.begin(), nums.end());

// 排序
// sort(nums.begin(), nums.end());
// sort(nums.rbegin(), nums.rend());


template <typename T>
void print_array(vector<T>& nums) {
    cout << "nums: {";
    for (int i = 0; i < nums.size(); i++) {
        const char *sign = i == nums.size() - 1 ? "" : ", ";
        cout << nums[i] << sign;
    }
    cout << "}" << endl;
}


int sum_array(vector<int>& nums) {
    return accumulate(nums.begin(), nums.end(), 0);;
}

template <typename T>
int find_array(vector<T>& vec, T element) {
    int idx = find(vec.begin(), vec.end(), element) - vec.begin();
    return idx == vec.size() ? -1 : idx;
}


#endif //ARRAY_H

