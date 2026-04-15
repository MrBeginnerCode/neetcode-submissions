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
    int l_height = 0;
    int r_height = 0;
    int height(TreeNode* node, int &h){
        if (node== NULL) return 0;
        int left = height(node->left,l_height);
        int right = height(node->right,r_height);

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root== NULL) return true;
        
        l_height = height(root->left, l_height);
        r_height = height(root->right, r_height);
        cout << l_height << r_height << endl;
        if (abs(l_height - r_height) > 1) return false;
        

        return isBalanced(root->left) && isBalanced(root->right);
        

    }
};
