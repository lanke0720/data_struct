vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> v;
        while (head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        reverse(v.begin(), v.end());
        return v;
         
    }