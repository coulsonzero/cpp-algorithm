// 递归
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) return root;
        if (root->val > val) return searchBST(root->left, val);
        if (root->val < val) return searchBST(root->right, val);
    }
};


class Solution2 {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) return root;
        return root->val > val ? searchBST(root->left, val) : searchBST(root->right, val);
    }
};

// 迭代
class Solution3 {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root && root->val != val) {
            root = root->val > val ? root->left : root->right;
        }
        return root;
    }
};