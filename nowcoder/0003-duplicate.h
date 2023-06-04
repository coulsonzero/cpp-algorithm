#pragma once
#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int duplicate(vector<int>& numbers) {
        // write code here
        sort(numbers.begin(), numbers.end());
        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] == numbers[i-1]) {
                return numbers[i];
            }
        }
        return -1;
    }
};