/**
 * Leetcode 13. Roman to Integer
 * @diff: simple
 *
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 *
 * for example:
 * Input: s = "LVIII"      Output: 58       Explanation: L = 50, V= 5, III = 3.
 * Input: s = "MCMXCIV"   Output: 1994      Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 */

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        int ans = 0;
        for (int k = 0; k < s.size(); ++k) {
            ans = map[s[k]] < map[s[k+1]] ? ans - map[s[k]] : ans + map[s[k]];
        }
        return ans;
    }
};