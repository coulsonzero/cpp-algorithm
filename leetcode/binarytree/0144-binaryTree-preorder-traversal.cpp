/**
 * 144. Binary Tree Preorder Traversal
 * @link: https://leetcode.cn/problems/binary-tree-preorder-traversal/
 * Input: root = [1,null,2,3]
 * Output: [1,2,3]
 *        1
 *         \
 *          2
 *         /
 *        3
 */

#include "treenode.h"
#include "lib_vector.h"
#include <vector>
#include <stack>

using namespace std;
using co::vec;

// 前序遍历：中-右-左
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }
    void preorder(TreeNode *root, vector<int> &res) {
        if (root == nullptr) {
            return;
        }
        res.push_back(root->val);
        preorder(root->left, res);
        preorder(root->right, res);
    }
};


class Solution2 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            ans.push_back(node->val);
            if (node->right) st.push(node->right);
            if (node->left)  st.push(node->left);
        }
        return ans;
    }
};


int main() {
    auto *ptr = new Solution();
    //      1
    //       \
    //        2
    //       /
    //      3
    auto node3 = new TreeNode {3, nullptr, nullptr};
    auto node2 = new TreeNode {2, node3, nullptr};
    auto root  = new TreeNode {1, nullptr, node2};

    auto ans = ptr->preorderTraversal(root);    // [1, 2, 3]
    vec::iter(ans);

    delete ptr;
    ptr = nullptr;
    return 0;
}