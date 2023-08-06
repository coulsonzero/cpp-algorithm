
// 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗：9 MB, 在所有 C++ 提交中击败了 36.85%的用户
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); ++i) {
            for (int j = 0; j < prefix.size(); ++j) {
                if (strs[i].size() <= j || strs[i][j] != prefix[j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }

        return prefix;
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string &s1 = strs.front();
        string &s2 = strs.back();
        int i = 0;
        while(i < s1.size() && i < s2.size() && s1[i] == s2[i]) {
            ++i;
        }
        return string(s1.begin(), s1.begin()+i);
    }
};