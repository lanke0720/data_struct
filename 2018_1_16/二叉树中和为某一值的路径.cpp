/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
����һ�Ŷ�������һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·��*/

class Solution {
public:
    vector<vector<int>> vv;
    vector<int> v;
    
    void dfs(TreeNode* root, int left_e)
    {
        v.push_back(root->val);
        if (left_e - root->val == 0 && !root->left && !root->right)
        {
            vv.push_back(v);
        }
        else
        {
            if(root->left) dfs(root->left, left_e - root->val);
            if(root->right) dfs(root->right, left_e - root->val);
        }
        v.pop_back();
    }
    
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if (root == NULL) return vv;
        
        dfs(root, expectNumber);
        return vv;
        
    }
};