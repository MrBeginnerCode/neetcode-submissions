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
    bool SameTree(TreeNode *root, TreeNode*subRoot){
        if (root == NULL && subRoot == NULL) return true;
        // if (root->val == subRoot->val && subRoot-> left == NULL && subRoot->right == NULL && (subRoot->)) return true;
        if (root == NULL || subRoot == NULL) return false;
        
        
        if (root->val != subRoot->val){
            return false;
        }
        return (SameTree(root->left, subRoot->left) && SameTree(root->right, subRoot->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack <TreeNode*> q; 
        q.push(root);
        TreeNode* found = nullptr;
        if (root == NULL && subRoot == NULL) return true;
        else if (root == NULL || subRoot == NULL) return false;
        
        while (!q.empty()){
            int qLen = q.size();
            
                TreeNode* node = q.top();
                q.pop();
                if (node->val == subRoot->val) {
                    if (SameTree(node, subRoot)) return true;
                    
                }
                if (node->left != NULL)
                q.push(node->left);
                if (node->right != NULL)
                q.push(node->right);
            
        }
        if (!found) return false;
        return SameTree(found,subRoot);

        
    }
};
