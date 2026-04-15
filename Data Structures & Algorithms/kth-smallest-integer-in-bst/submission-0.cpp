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
    int kthSmallest(TreeNode* root, int k) {
        vector <int> res;
        res.push_back(root->val);
        queue <TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            int l = q.size();
            for (int i = 0; i < l; i++){
                TreeNode* node = q.front();
                q.pop();
                if (node->left!= NULL){
                    res.push_back(node->left->val);
                    q.push(node->left);
                }
                if (node->right!= NULL){
                    res.push_back(node->right->val);
                    q.push(node->right);
                }
            }
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size();i++){
            cout << res[i];
        }
        return res[k-1];
    }
};
