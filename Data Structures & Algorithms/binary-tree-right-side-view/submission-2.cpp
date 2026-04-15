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
    vector<int> rightSideView(TreeNode* root) {
        vector <int> res;
        queue <TreeNode*> q;
        bool isFound = false;
        if (root==NULL) return res;
        q.push(root);
        res.push_back(root->val);
        
        while (!q.empty()){
            
            int l = q.size();
            for (int i = 0; i < l; i++){
                TreeNode* node = q.front();
                q.pop();
                if (node->right != NULL && !isFound){
                    isFound = true;
                    res.push_back(node->right->val);
                    
                }
                if (node->left != NULL && !isFound){
                    isFound = true;
                    res.push_back(node->left->val);
                    
                }
                if (node->right != NULL) q.push(node->right);
                if (node->left != NULL) q.push(node->left);

            }
            isFound = false;
        }
        
        return res;
    }
};
