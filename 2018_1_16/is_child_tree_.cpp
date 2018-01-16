/*
�������ö�����A��B���ж�B�ǲ���A���ӽṹ��
��ps������Լ��������������һ�������ӽṹ��

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool judge(TreeNode* t1, TreeNode* t2)
    {
        if (t2 == NULL) return true;
        if (t1 == NULL) return false;
        
        
        if (t1->val != t2->val)
        {
             return false;
        }
        return judge(t1->left,t2->left) && judge(t1->right, t2->right);
    }
    
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2 == NULL) return false;
        bool ret = false;
        if (pRoot1->val == pRoot2->val){
            return judge(pRoot1, pRoot2);
        }
        if(!ret) ret =  HasSubtree(pRoot1->left, pRoot2->right); 
        if(!ret) ret =  HasSubtree(pRoot1->right, pRoot2->right);
        
        return ret;
    }
};