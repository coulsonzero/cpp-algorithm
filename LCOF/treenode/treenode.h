#ifndef CPP_ALGORITHM_TREENODE_H
#define CPP_ALGORITHM_TREENODE_H

struct TreeNode {
   int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif //CPP_ALGORITHM_TREENODE_H
