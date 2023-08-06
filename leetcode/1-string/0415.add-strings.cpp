class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int cur = 0;
        int n1 = num1.size()-1, n2 = num2.size()-1;
        while(n1 >= 0 || n2 >= 0 || cur > 0)
        {
            if(n1 >= 0) cur += num1[n1--] - '0';
            if(n2 >= 0) cur += num2[n2--] - '0';
            ans += to_string(cur%10);
            cur /= 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};



