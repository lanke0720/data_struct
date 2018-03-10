/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if (!pNode) return NULL;
        if (pNode->right != NULL)
        {
            pNode = pNode->right;
            while (pNode->left) 
            {
                pNode = pNode->left;
            }
            return pNode;
        }
        while (pNode->next != NULL)
        {
            TreeLinkNode* proot = pNode->next;
            if (proot->left == pNode) 
                return proot;
            proot = proot->next;
        }
        return NULL;
    }
};

����һ�������������е�һ����㣬
���ҳ��������˳�����һ����㲢�ҷ��ء�
ע�⣬���еĽ�㲻�����������ӽ�㣬
ͬʱ����ָ�򸸽���ָ�롣