#ifndef CPP_ALGORITHM_1156_MAX_LENGTH_STRING_H
#define CPP_ALGORITHM_1156_MAX_LENGTH_STRING_H

#include <vector>
#include <string>
using namespace std;


/********************************************************************
 * 1156. Swap For Longest Repeated Character Substring              *
 * @Date: 06-05-2023 (m-d-y)                                        *
 *                                                                  *
 * Example                                                          *
 * Input: text = "ababa"                                            *
 * Output: 3                                                        *
 * Input: text = "aaabaaa"                                          *
 * Output: 6                                                        *
 * Input: text = "aaaaa"                                            *
 * Output: 5                                                        *
 ********************************************************************/


class Solution {
public:
    int maxRepOpt1(string text) {
        vector<int> vec(26, 0);
        for(auto &c: text) vec[c-'a']++;
        int n = text.size(), l = 0, ans = 1;
        for(int i = 0; i < n; i = l) {
            while(l < n && text[l] == text[i]) ++l;
            int r = l + 1;
            while(r < n && text[r] == text[i]) ++r;
            ans = max(ans, min(r - i, vec[text[i]-'a']));
        }
        return ans;
    }
};

#endif //CPP_ALGORITHM_1156_MAX_LENGTH_STRING_H
