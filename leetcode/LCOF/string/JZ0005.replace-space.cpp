// -*- C++ -*-
/******************************************************
 * JZ Offer 05. replace space                         *
 * input:  "We are happy."                            *
 * output: "We%20are%20happy."                        *
 ******************************************************/


class Solution {
public:
    string replaceSpace(string s) {
        stringstream ans;
        for (auto c : s) {
            if (c == ' ') ans << "%20";
            else ans << c;
        }
        return ans.str();
    }
};

/*
class Solution {
public:
    string replaceSpace(string s) {
        string ans;
        for (auto c : s) {
            if (c == ' ') ans += "%20";
            else ans += c;
        }
        return ans;
    }
};
*/

