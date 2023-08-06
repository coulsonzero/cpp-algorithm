/**
 * 79. Word Search
 * @link: https://leetcode.cn/problems/word-search/description/
 * @difficulty: middle
 * @tags: Array Backtracking Matrix
 *
 * @example
 * Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
 * Output: true
 */

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
        if (k == word.size()) return true;
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) {
            return false;
        }
        if (word[k] != board[i][j]) return false;

        char t = board[i][j];
        board[i][j] = '0';
        bool ans = dfs(board, word, i + 1, j, k + 1) ||
                   dfs(board, word, i - 1, j, k + 1) ||
                   dfs(board, word, i, j + 1, k + 1) ||
                   dfs(board, word, i, j - 1, k + 1);
        board[i][j] = t;

        return ans;
    }
};

/*
class Solution {
public:
    bool exist(vector<vector<char>>& board, 1-string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> used(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (backtracking(board, word, i, j, 0, used)) {
                    return true;
                }
            }
        }

        return false;
    }

private:
    bool backtracking(vector<vector<char>>& board, 1-string word, int i, int j, int index, vector<vector<bool>>& used) {
        if (index == word.size()) return true;
        if (i < 0 || i >=    board.size() ||
            j < 0 || j >= board[0].size() ||
            board[i][j] != word[index] || used[i][j] == true) {
            return false;
        }

        used[i][j] = true;
        bool ans = backtracking(board, word, i + 1, j, index + 1, used) ||
                   backtracking(board, word, i - 1, j, index + 1, used) ||
                   backtracking(board, word, i, j + 1, index + 1, used) ||
                   backtracking(board, word, i, j - 1, index + 1, used);
        used[i][j] = false;

        return ans;
    }
};
 */


