#include "treenode.h"
#include "lib_vector.h"
#include <vector>

using namespace std;
using co::vec;

// 中序遍历：左-中-右
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
    void inorder(TreeNode* root, vector<int>& res) {
        if (root == nullptr) return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
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

    auto ans = ptr->inorderTraversal(root);    // [1, 3, 2]
    vec::iter(ans);

    delete ptr;
    ptr = nullptr;
    return 0;
}