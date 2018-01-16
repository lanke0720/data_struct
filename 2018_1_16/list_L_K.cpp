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
        if (pListHead == NULL || k == 0) return NULL;  //需要判断头结点是否为空和 K 值
    	ListNode* cur = pListHead;
        ListNode* head = cur;
        while (--k)
        {
            if (cur->next == NULL) return NULL; // 如果K > 链表长度 
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