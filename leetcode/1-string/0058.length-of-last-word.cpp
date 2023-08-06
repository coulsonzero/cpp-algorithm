/**
 * 58. Length of Last Word
 * different: sample
 *
 * [for example]
 * Input: s = "Hello World"
 * Output: 5
 *
 * Input: s = "   fly me   to   the moon  "
 * Output: 4
 */



// 执行用时：0ms
// 内存消耗：6.3MB
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] != ' ') cnt++;
            if (s[i] == ' ' && cnt != 0) break;
        }
        return cnt;
    }
};


// 执行用时：4ms
class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = 0, end = 0;
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') i--;
        end = i;
        while (i >= 0 && s[i] != ' ') i--;
        start = i;
        return end - start;
    }
};





