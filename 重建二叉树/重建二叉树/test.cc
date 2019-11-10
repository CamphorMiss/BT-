/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0||vin.size()==0)
            return NULL;
        TreeNode *root=CreatTree(pre,0,pre.size()-1,vin,0,vin.size()-1);
        return root;
    }
    TreeNode* CreatTree(vector<int> pre,int prestar,int preend,vector<int> vin,int vinstar,int vinend)
    {
        if(prestar>preend||vinstar>vinend)
            return NULL;
        TreeNode *root=new TreeNode(pre[prestar]);
        for(int i=vinstar;i<=vinend;i++)
        {
            if(vin[i]==pre[prestar])//找到一个根
            {
                root->left=CreatTree(pre,prestar+1,prestar+i-vinstar,vin,vinstar,i-1);
                root->right=CreatTree(pre,prestar+1+i-vinstar,preend,vin,i+1,vinend);
                break;
            }
        }
        return root;
    }
    
};