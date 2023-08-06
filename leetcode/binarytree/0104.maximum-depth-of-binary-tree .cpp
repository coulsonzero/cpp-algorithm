/**
 * 104. 二叉树的最大深度
 * @link: https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/
 *
 * Input: root = [3,9,20,null,null,15,7]
 * Output: 3
 *            3
 *           / \
 *          9  20
 *             / \
 *            15  7
 * Input: root = [1,null,2]
 * Output: 2
 */


class Solution {
public:
    int maxDepth(TreeNode* root) {
        return root == nullptr ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

