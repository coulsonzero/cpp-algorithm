class Solution {
    unordered_map<char, vector<char>> tab = {
        {'2',{'a','b','c'}},
        {'3',{'d','e','f'}},
        {'4',{'g','h','i'}},
        {'5',{'j','k','l'}},
        {'6',{'m','n','o'}},
        {'7',{'p','q','r','s'}},
        {'8',{'t','u','v'}},
        {'9',{'w','x','y','z'}}
    };
    vector<string> res = {};
public:
    void dfs(string digits, int i, int n, string tmp){
        if(i == n) {
            res.push_back(tmp);
            return;
        }
        for(int j = 0; j < tab[digits[i]].size(); j++){
            tmp.push_back(tab[digits[i]][j]);
            dfs(digits,i+1,n,tmp);
            tmp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty())return res;
        string tmp;
        dfs(digits,0,digits.size(),tmp);
        return res;
    }
};





class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> map = {
            {'0', " "}, {'1',"*"}, {'2', "abc"},
            {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
            {'6',"mno"}, {'7',"pqrs"},{'8',"tuv"},
            {'9',"wxyz"}
        };
        vector<string> res;
        if(digits == "") return res;
        dfs(res, "", digits, map, 0);
        return res;
    }

    void dfs(vector<string> &res, string str, string &digits, unordered_map<char, string> &m, int k){
        if(str.size() == digits.size()){
            res.push_back(str);
            return;
        }
        string tmp = m[digits[k]];
        for(char w : tmp){
            str += w;
            dfs(res, str, digits, m, k+1);
            str.pop_back();
        }
        return ;
    }
};