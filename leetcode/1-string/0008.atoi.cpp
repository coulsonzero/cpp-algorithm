/**
 * 输入：s = "4193 with words"
 * 输出：4193
 */

#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        stringstream ss(s);
        int x = 0;
        ss >> x;
        return x;
    }
};



