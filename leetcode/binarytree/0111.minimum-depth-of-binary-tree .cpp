/**
 * 111. 二叉树的最小深度
 * @link: https://leetcode.cn/problems/minimum-depth-of-binary-tree/description/
 * Input: root = [3,9,20,null,null,15,7]
 * Output: 2
 *            3
 *           / \
 *          9  20
 *             / \
 *            15  7
 */

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right != nullptr) {
            return 1 + minDepth(root->right);
        }
        if (root->left != nullptr && root->right == nullptr) {
            return 1 + minDepth(root->left);
        }
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};


class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left  = minDepth(root->left);
        int right = minDepth(root->right);
        return (left && right) ? min(left, right) + 1 : left + right + 1;
    }
};