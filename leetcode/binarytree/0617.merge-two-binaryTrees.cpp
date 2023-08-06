/**
 * 617. Merge Two Binary Trees
 * @link: https://leetcode.cn/problems/merge-two-binary-trees/description/
 * Input: root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
 * Output: [3,4,5,5,4,null,7]
 *        1                    2                          3
 *       / \                  / \                        / \
 *      3   2                1   3       ===>           4   5
 *     /                      \   \                    / \   \
 *    5                        4   7                  5   4   7
 */

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) return root2;
        if (root2 == nullptr) return root1;
        root1->val += root2->val;
        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);
        return root1;
    }
};