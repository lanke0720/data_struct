/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径*/

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