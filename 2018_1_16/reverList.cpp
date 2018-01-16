����һ��������ת�����������������Ԫ�ء�
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL) return NULL;
        
        ListNode* pNewHead = NULL;
        ListNode* cur = pHead;
        ListNode* prev = NULL;
        while (cur)
        {
            ListNode* next = cur->next;
            
            if (next == NULL)
                pNewHead = cur;
            
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return pNewHead;
        
    }
};