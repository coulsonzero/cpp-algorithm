/**
 * 543. Diameter of Binary Tree
 * @link: https://leetcode.cn/problems/diameter-of-binary-tree/description/
 * Input: root = [1,2,3,4,5]
 * Output: 3
 * Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
 */

class Solution {
public:
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        ans = max(ans, l + r);
        return max(l, r) + 1;
    }
};