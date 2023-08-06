/**
 * 383. Ransom Note
 * @link: https://leetcode.cn/problems/ransom-note/description/
 * @tags: 1-string counting hashtable
 * @descript: return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
 *
 * Input: ransomNote = "a", magazine = "b"
 * Output: false
 * Input: ransomNote = "aa", magazine = "aab"
 * Output: true
 * Input: ransomNote = "aab", magazine = "baa"
 * Output: false
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(26, 0);
        for (auto c : magazine) {
            vec[c - 'a']++;
        }
        for (auto c : ransomNote) {
            vec[c - 'a']--;
            if (vec[c - 'a'] < 0) return false;
        }
        return true;
    }
};


int main() {
    auto ptr = new Solution();
    cout << boolalpha;
    cout << ptr->canConstruct("a", "b")     << endl;    // false
    cout << ptr->canConstruct("aa", "aab")  << endl;    // true
    cout << ptr->canConstruct("aab", "baa") << endl;    // true

    return 0;
}





