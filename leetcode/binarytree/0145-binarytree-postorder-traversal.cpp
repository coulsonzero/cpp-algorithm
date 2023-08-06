/**
 * 145. Binary Tree Postorder Traversal
 * @link: https://leetcode.cn/problems/binary-tree-postorder-traversal/description/
 *
 * Input: root = [1,null,2,3]
 * Output: [3,2,1]
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


// 后序遍历：左-右-中
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        postorder(root, res);
        return res;
    }
    void postorder(TreeNode *root, vector<int> &res) {
        if (root == nullptr) {
            return;
        }
        postorder(root->left, res);
        postorder(root->right, res);
        res.push_back(root->val);
    }
};

// stack
class Solution2 {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            ans.push_back(node->val);
            if (node->left)  st.push(node->left);
            if (node->right) st.push(node->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};



class Solution3 {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        vector<int> ans;
        if(!root) return ans;
        stack.push(root);
        while(!stack.empty()) {
            TreeNode *node = stack.top();
            if(!node->left && !node->right) {
                ans.push_back(node->val);
                stack.pop();
            }
            if(node->right) {
                stack.push(node->right);
                node->right = nullptr;
            }
            if(node->left) {
                stack.push(node->left);
                node->left = nullptr;
            }
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

    auto ans = ptr->postorderTraversal(root);    // [3, 2, 1]
    vec::iter(ans);

    delete ptr;
    ptr = nullptr;
    return 0;
}

