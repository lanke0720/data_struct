输入两个单调递增的链表，输出两个链表合成后的链表，
当然我们需要合成后的链表满足单调不减规则。
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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {    
        
        if(pHead1==NULL)            return pHead2;
        else if(pHead2==NULL)       return pHead1;
		/*递归解法
        ListNode *newhead=NULL;
        if(pHead1->val <= pHead2->val)
        {
            newhead = pHead1;
            newhead ->next=Merge(pHead1->next,pHead2);
        }
        else
        {
            newhead = pHead2;
            newhead -> next=Merge(pHead1,pHead2->next);
        }
        return newhead;
        */
        //非递归解法
        ListNode* newHead = NULL;
		ListNode* cur = newHead;
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;
        ListNode* temp = NULL;
        while (p1 != NULL && p2 != NULL)
        {
            if (p1->val > p2->val)
            {
				temp = p2;
                p2 = p2->next;
            }
            else{
                temp = p1;
                p1 = p1->next;
            }
            if(newHead == NULL)
            {
                newHead = temp;
                cur = newHead;
            }
            else{
                cur->next= temp;
                cur = cur->next;
            }
        }
        if (p1 == NULL) cur->next = p2;
        else cur->next = p1;
        
        return newHead;
        
    }
};