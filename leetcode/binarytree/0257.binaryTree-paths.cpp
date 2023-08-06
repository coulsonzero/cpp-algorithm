#include "treenode.h"
#include "lib_vector.h"
#include <vector>
#include <string>

using namespace std;
using co::vec;

/**
 * 257. 二叉树的所有路径
 * @link: https://leetcode.cn/problems/binary-tree-paths/description/
 * Input: root = [1,2,3,null,5]
 * Output: ["1->2->5","1->3"]
 *            1
 *           / \
 *          2   3
 *           \
 *            5
 */

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string path;
        if (root == nullptr) return res;
        dfs(root, path, res);
        return res;
    }

    void dfs(TreeNode* root, string path, vector<string>& res) {
        path += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            res.push_back(path);
            return;
        }
        if (root->left)  dfs(root->left,  path + "->", res);
        if (root->right) dfs(root->right, path + "->", res);
    }
};


int main() {
    auto *ptr = new Solution();
    //      1
    //     / \
    //    2   3
    //     \
    //      5
    auto node4 = new TreeNode {5, nullptr, nullptr};
    auto node3 = new TreeNode {3, nullptr, nullptr};
    auto node2 = new TreeNode {2, nullptr, node4};
    auto root  = new TreeNode {1, node2, node3};

    auto ans = ptr->binaryTreePaths(root);  // [ 1->2->5, 1->3 ]
    vec::iter(ans);

    delete ptr;
    ptr = nullptr;

    return 0;
}