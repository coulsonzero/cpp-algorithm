#include "treenode.h"

/**
 * 112. Path Sum
 * @link: https://leetcode.cn/problems/path-sum/description/
 * Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
 * Output: true
 * Explanation:
 *            5
 *           / \
 *          4   8
 *         /   / \
 *        11  13  4
 *       / \       \
 *      7   2       1
 * exits the path: 5->4->11->2 = 22
 */

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }
        return hasPathSum(root->left, targetSum - root->val)
               || hasPathSum(root->right, targetSum - root->val);
    }
};

