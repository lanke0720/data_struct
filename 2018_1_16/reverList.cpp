输入一个链表，反转链表后，输出链表的所有元素。
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