����ĳ��������ǰ���������������Ľ����
���ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������
{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}��
���ؽ������������ء�

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
        if (pre.size() == 0 || vin.size() == 0)
        {
            return NULL; 
        }
        TreeNode* root = new TreeNode(pre[0]);
        int pos = 0;
        for(pos=0;pos<vin.size();pos++)
        {
            if(pre[0] == vin[pos])
          	  {break;}
        }
        vector<int> pre_left, pre_right, vin_left, vin_right;
        for (int i = 0; i < pos; i++)
        {
            pre_left.push_back(pre[i+1]);
            vin_left.push_back(vin[i]);
        }
        for (int j = pos+1; j < pre.size(); j++)
        {
            pre_right.push_back(pre[j]);
            vin_right.push_back(vin[j]);
        }

        root->left = reConstructBinaryTree(pre_left, vin_left);
        root->right = reConstructBinaryTree(pre_right, vin_right);
        return root;
	}