/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��*/
class Solution {
public:
    void help(TreeNode* root, TreeNode*& pre) //�������
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