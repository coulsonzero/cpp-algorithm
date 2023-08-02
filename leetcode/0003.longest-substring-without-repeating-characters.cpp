/**
 * 3. Longest Substring Without Repeating Characters
 * Input: s = "abcabcbb"
 * Output: 3
 * Input: s = "pwwkew"
 * Output: 3
 */


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;
        unordered_map<int, int> cnt;
        for (int l = 0, r = 0; r < n; r++) {
            if (cnt[s[r]]++ != 0)
                while (cnt[s[l++]]-- == 1);
            res = max(res, r - l + 1);
        }
        return res;
    }
};




class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l = 0, r = 0, ans = 0;
        int n = s.size();
        while (r < n) {
            if (set.end() == set.find(s[r])) {
                set.insert(s[r++]);
                ans = max(r-l,ans);
            } else {
                set.erase(s[l++]);
            }
        }
        return ans;
    }
};