class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        int n = source.size();
        bool ok = 0;
        vector<string> ans;
        string s = "";
        for (int i = 0; i < n; i++) {
            int m = source[i].size();
            for (int j = 0; j < m; j++) {
                if (j + 1 < m && source[i][j] == '/' && source[i][j + 1]=='/' && !ok) {
                    break;
                }
                if (j + 1 < m && source[i][j] == '/' && source[i][j + 1]=='*' && !ok) {
                    ok = 1;j++;
                    continue;
                }
                if(!ok) s.push_back(source[i][j]);
                if (j + 1 < m && source[i][j] == '*' && source[i][j + 1]=='/' && ok) {
                    ok = 0; j++;
                }
            }
            if (!ok) {
                if(s.size()) ans.push_back(s);
                s = "";
            }
        }
        return ans;
    }
};




class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string>res;
        istringstream iss(regex_replace(
        accumulate(source.begin(), source.end(), string{}, [] (const string& a, const string& b) {return a + "\n" + b;}),
                regex("//.*|/\\*(.|\n)*?\\*/"), ""));
        for (string token; getline(iss, token, '\n');) {
            if (token != "") res.push_back(token);
        }
        return res;
    }
};