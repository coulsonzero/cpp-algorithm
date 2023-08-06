/**
 * 6925. 故障键盘
 * @link: https://leetcode.cn/problems/faulty-keyboard/description/
 * @descript: 你的笔记本键盘存在故障，每当你在上面输入字符 'i' 时，它会反转你所写的字符串。而输入其他字符则可以正常工作
 *
 * Input: s = "string"
 * Output: "rtsng"
 */

class Solution {
public:
    string finalString(string s) {
        string res = "";
        for (auto &c : s) {
            if (c == 'i') reverse(res.begin(), res.end());
            else res.push_back(c);
        }
        return res;
    }
};

