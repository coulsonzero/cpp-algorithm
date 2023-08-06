#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        auto f = [&](string s) -> int {
            char t = s[0];
            int cnt  = 0;
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == t) {
                    cnt++;
                } else if (s[i] < t) {
                    t = s[i];
                    cnt = 1;
                }
            }
            return cnt;
        };

        vector<int> nums, res;
        for (auto& w : words) {
            nums.push_back(f(w));
        }
        sort(nums.begin(), nums.end());
        for (auto& q : queries) {
            res.push_back(nums.end() - upper_bound(nums.begin(), nums.end(), f(q)));
        }
        return res;
    }
};


int main() {
    vector<string> queries, words;
    queries = {"bbb","cc"}, words = {"a","aa","aaa","aaaa"};
    auto *ptr = new Solution();
    auto res = ptr->numSmallerByFrequency(queries, words);
    for (auto v : res) {
        cout << v << " ";
    }
    cout << endl;   // [1, 2]

    return 0;
}