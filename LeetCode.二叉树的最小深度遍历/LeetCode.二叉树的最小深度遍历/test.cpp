/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int deepth=1;//Éî¶È
        if(root->left==NULL&&root->right==NULL)
            return deepth;
        if(root->left==NULL)
           return deepth+minDepth(root->right);
        if(root->right==NULL)
            return deepth+minDepth(root->left);
        return deepth+min(minDepth(root->left),minDepth(root->right));
        
    }
};