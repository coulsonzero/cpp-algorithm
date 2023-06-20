#ifndef VOWEL_STRINGS_H
#define VOWEL_STRINGS_H


/*******************************************************************************
 * 2559. Count Vowel Strings in Ranges                                         *
 * @Date: 06-05-2023 (m-d-y)                                                   *
 *                                                                             *
 * Example                                                                     *
 * Input: words = ["aba","bcb","ece","aa","e"], queries = [[0,2],[1,4],[1,1]]  *
 * Output: [2,3,0]                                                             *
 * Input: words = ["a","e","i"], queries = [[0,2],[0,1],[2,2]]                 *
 * Output: [3,2,1]                                                             *
 *******************************************************************************/


class Solution {
public:
    bool Find(char &c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> vec;
        vec.push_back(0);
        for (string word : words) {
            vec.push_back(vec.back() + (Find(word[0]) && Find(word.back())));
        }

        vector<int> ans;
        for (vector<int> &q : queries) {
            ans.push_back(vec[q[1] + 1] - vec[q[0]]);
        }
        return ans;
    }
};

#endif //VOWEL_STRINGS_H
