#include "treenode.h"
#include <climits>
#include <algorithm>

using namespace std;


/**
 * 124. Binary Tree Maximum Path Sum
 * @link: https://leetcode.cn/problems/binary-tree-maximum-path-sum/description/
 *
 * Input: root = [-10,9,20,null,null,15,7]
 * Output: 42
 * Explanation:
 *               -10
 *              /   \
 *             9     20
 *                  /  \
 *                 15   7
 * the sum of max path: 15->20->7 = 42
 */


class Solution {
public:
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }

    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = max(dfs(root->left), 0);
        int right = max(dfs(root->right), 0);
        ans = max(ans, left + right + root->val);
        return max(left, right) + root->val;
    }
};


int main() {


    return 0;
}