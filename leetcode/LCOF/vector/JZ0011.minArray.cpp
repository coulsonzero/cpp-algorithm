#include <vector>

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int t = numbers[0];
        for (auto v : numbers) {
            if (t > v) t = v;
        }
        return t;
    }
};



