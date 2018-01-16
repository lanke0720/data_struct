/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == NULL) return NULL;
        //1;
        RandomListNode* cur = pHead;
        while (cur)
        {
            RandomListNode* temp = new RandomListNode(cur->label);
            temp->next = cur->next;
            cur->next = temp;
            cur = cur->next->next;
        }
        
        //2
        cur = pHead;
        while(cur)
        {
            if (cur->random){
            	cur->next->random = cur->random->next;
            }else{
                cur->next->random = NULL;
			}
            cur = cur->next->next;
        }
        
        //3
        cur = pHead;
        RandomListNode* newhead = pHead->next;
        RandomListNode* temp = NULL;
        while(cur->next)
        {
            temp = cur->next;
            cur->next = temp->next;
            cur = temp;
        }
        return newhead;
    }
};