/**
 * 101. 对称二叉树
 * @link: https://leetcode.cn/problems/symmetric-tree/description/
 *
 * Input: root = [1,2,2,3,4,4,3]
 * Output: true
 *             1
 *           /   \
 *          2     2
 *         / \   / \
 *        3   4 4   3
 */

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return cmp(root->left, root->right);
    }
    bool cmp(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr) return false;
        if (left->val != right->val) return false;
        return cmp(left->left, right->right) && cmp(left->right, right->left);
    }
};