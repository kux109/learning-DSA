//given two sorted linked list, merge 

public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = new ListNode(-1);
        ListNode* tmp = head;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2->val)
            {
                tmp->next = l1;
                l1 = l1->next;
            }
            else
            {
                tmp->next = l2;
                l2 = l2->next;
            }
            tmp = tmp->next;
        }
        
        if(l1!=NULL)
        {
            tmp->next = l1;
            
        }
        if(l2!=NULL)
        {
            tmp->next = l2;
        }
        
        head = head->next;
        return head;   
    }
};