/**
 * 501. 二叉搜索树中的众数
 * @link: https://leetcode.cn/problems/find-mode-in-binary-search-tree/description/
 * Input: root = [1,null,2,2]
 * Output: [2]
 */

#include <treenode.h>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    unordered_map<int, int> map;
    vector<int> findMode(TreeNode* root) {
        // map
        dfs(root);

        // get max value
        // int m = 0;
        int m = INT_MIN;
        for (auto& it : map) {
            m = max(m, it.second);
        }

        // if exists same max value
        vector<int> ans;
        for (auto& it : map) {
            if (it.second == m) ans.push_back(it.first);
        }
        return ans;
    }

    void dfs(TreeNode* root) {
        if (root) map[root->val]++;
        if (root->left) dfs(root->left);
        if (root->right) dfs(root->right);
    }
};


/*
void dfs(TreeNode* root) {
    if (root == nullptr) return;
    map[root->val]++;
    dfs(root->left);
    dfs(root->right);
}
*/

