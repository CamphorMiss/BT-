#define _CRT_SECURE_NO_WARNINGS 1

 //Definition* Definition for a binary tree node.
 struct TreeNode {
	    int val;
	    struct TreeNode *left;
	    struct TreeNode *right;
	};
	
		bool isSame(struct TreeNode* p,struct TreeNode* q){
			if(p==NULL||q==NULL)
				return p==q;
			return p->val==q->val&&isSame(p->left,q->left)&&isSame(p->right,q->right);
	}
	bool isSubtree(struct TreeNode* s, struct TreeNode* t) {
		if(s==NULL)
			return false;
		return isSame(s,t)||isSubtree(s->left,t)||isSubtree(s->right,t);
	}

