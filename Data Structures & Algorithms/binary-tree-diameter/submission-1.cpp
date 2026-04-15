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

    int height(TreeNode* node, int &di) {
        if (node == NULL) return 0;
        
        int left = height(node->left,di);
        int right = height(node->right,di);

        di = max(left+right, di);
        return max(left,right)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root){
        if (root == NULL) return 0;
        int di = 0;
        height(root,di);
        return di;
    }
};
