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
    void dfs(TreeNode* root, int bound, int &good){
        if (!root) return;
        if (root->val >= bound) {bound = root->val;good++;}
        dfs(root->left,bound,good);
        dfs(root->right,bound,good);


    }
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        int bound = root->val;
        int good = 0;
        dfs(root, bound,good);
        return good;


    }
};
