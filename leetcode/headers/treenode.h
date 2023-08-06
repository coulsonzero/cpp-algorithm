#ifndef CPP_ALGORITHM_TREENODE_H
#define CPP_ALGORITHM_TREENODE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//TreeNode* root1  = new TreeNode(1, nullptr, nullptr);
//auto root  = new TreeNode {1, node2, node3};

#endif //CPP_ALGORITHM_TREENODE_H
