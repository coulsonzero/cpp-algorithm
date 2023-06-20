#include <iostream>
#include <string>

class Solution {
public:
    int strToInt(string str) {
        int sign = 1;
        //1.消去空格
        int i = 0;
        while(str[i] == ' ') i++;
        //2.判断符号
        if (str[i] == '-') {
            sign = -1;
            i++;
        } else if(str[i] == '+'){
            sign = 1;
            i++;
        }
        long num = 0; //防止越界
        while (str[i] >= '0' && str[i] <= '9') {
            int val = str[i]-'0';
            num = num*10 + sign*val;
            i++;
            if(num >= INT_MAX) return INT_MAX;
            if(num <= INT_MIN) return INT_MIN;
        }
        return (int)num;
    }
};

/**
 * 输入: "   -42"
 * 输出: -42
 * 输入: "4193 with words"
 * 输出: 4193
 * 输入: "words and 987"
 * 输出: 0
 * 输入: "-91283472332"
 * 输出: -2147483648
 */