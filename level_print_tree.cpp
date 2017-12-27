//�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
/*
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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue<TreeNode*> q;
        vector<int> v;
        if (root == NULL) return v;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            v.push_back(temp->val);
            q.pop();
            
            if (temp->left) 
            {q.push(temp->left);}
            if (temp->right) 
            {q.push(temp->right);}
        }
        return v;
    }
};