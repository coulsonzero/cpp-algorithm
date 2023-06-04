#ifndef RELATIVE_RANKS_H
#define RELATIVE_RANKS_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp;
        temp.assign(score.begin(), score.end());
        sort(temp.rbegin(), temp.rend());

        int n = score.size();
        vector<string> ans = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (int i = 3; i < n; i++) {
            ans.push_back(to_string(i + 1));
        }

        vector<string> res;
        for (auto v : score) {
            int idx = find(temp.begin(), temp.end(), v) - temp.begin();
            res.push_back(ans[idx]);
        }

        return res;
    }
};

#endif //RELATIVE_RANKS_H
