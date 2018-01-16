/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。*/
class Solution {
public:
    void help(TreeNode* root, TreeNode*& pre) //中序遍历
    {
        if (root == NULL) return ;
        help(root->left, pre);
        root->left = pre;
        if (pre) pre->right = root; 
        pre = root;
        help(root->right, pre);
    }
    
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if (pRootOfTree == NULL) return NULL;
        if (pRootOfTree->left==NULL && pRootOfTree->right==NULL) return pRootOfTree;
        
        TreeNode* pre = NULL;
        help(pRootOfTree, pre);
        TreeNode* cur = pRootOfTree; 
        while (cur->left)
            cur = cur->left;
        
        return cur;
        
    }
};