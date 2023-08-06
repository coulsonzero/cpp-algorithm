class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 1;
        int begin = 0;
        vector<int> dp(n);
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {
                dp[i] = (s[i]==s[j] ? (j-i<3 ? true : dp[i+1]) :false);
                if(dp[i] && (j-i+1)>maxLen){
                    maxLen =j-i+1;
                    begin =i;
                }
            }
        }
        return s.substr(begin, maxLen);
    }
};




class Solution {
public:
    string longestPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            func(s, i, i); // 奇数长度的子串
            func(s, i, i + 1); // 偶数长度的子串
        }
        return s.substr(start, len);
    }
private:
    // 用于构造最长子串
    int start;
    int len = 0;

    void func(string& s, int i, int j) {
        while (i >= 0 && j < s.size() && s[i] == s[j]) {
            if (j - i + 1 > len) {
                // 定位暂时最长的子串位置
                start = i;
                len = j - i + 1;
            }
            i--;
            j++;
        }

    }
};