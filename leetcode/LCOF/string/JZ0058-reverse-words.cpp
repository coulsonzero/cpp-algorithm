/**
 * input : s = "abcdefg", k = 2
 * output: "cdefgab"
 */


#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string reverseLeftWords(string s, int n) {
        stringstream ans;
        for (int i = n; i < s.size(); i++) {
            ans << s[i];
        }
        for (int i = 0; i < n; i++) {
            ans << s[i];
        }
        return ans.str();
    }
};

/*
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return s.substr(n) + s.substr(0, n);
    }
};
 */

