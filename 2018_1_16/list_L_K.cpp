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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (pListHead == NULL || k == 0) return NULL;  //��Ҫ�ж�ͷ����Ƿ�Ϊ�պ� K ֵ
    	ListNode* cur = pListHead;
        ListNode* head = cur;
        while (--k)
        {
            if (cur->next == NULL) return NULL; // ���K > ������ 
            cur = cur->next;
        }
        
        while (cur->next != NULL)
        {
            head = head->next;
            cur = cur->next;
        }
        return head;
    }
};