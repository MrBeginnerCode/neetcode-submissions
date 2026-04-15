/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        vector<int> path;
        path.push_back(root->val);
        res.push_back(path);
        path.clear();
        queue <TreeNode*> level;
        level.push(root);
        while (!level.empty()){
            int width = level.size();
            for (int i = 0; i < width;i++){
                TreeNode* node = level.front();
                level.pop();
                if (node->left) {
                    level.push(node->left);
                    path.push_back(node->left->val);
                }
                if (node->right) {
                    level.push(node->right);
                    path.push_back(node->right->val);
                }
            }
            if (path.empty()) continue;
            res.push_back(path);
            path.clear();
        }
        return res;
    }
};
