/**
 * 316. Remove Duplicate Letters
 * @link: https://leetcode.cn/problems/remove-duplicate-letters/description
 *
 * for example:
 * Input: s = "bcabc"      Output: "abc"
 * Input: s = "cbacdcbc"   Output: "acdb"
 */

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> nums(26), vist(26);
        for(char c : s) {
            nums[c-'a']++;
        }
        string ans;
        for (auto c : s) {
            if (vist[c-'a'] == 1) {
                nums[c-'a']--;
                continue;
            }

            while (!ans.empty() && ans.back() > c && nums[ans.back()-'a'] > 1) {
                nums[ans.back()-'a']--;
                vist[ans.back()-'a'] = 0;
                ans.pop_back();
            }
            ans.push_back(c);
            vist[c-'a'] = 1;
        }

        return ans;
    }
};



