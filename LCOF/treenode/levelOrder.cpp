#include "treenode.h"
#include <vector>

class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> res;
        if(root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* tmp = q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
            res.push_back(tmp->val);
        }
        return res;
    }
};