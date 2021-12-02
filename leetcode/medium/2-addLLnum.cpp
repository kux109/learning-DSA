// VISIT FOR PROBLEM  --  https://leetcode.com/problems/add-two-numbers/


//SOULUTION


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int sum   = (l1->val+l2->val)%10;
        int carry = (l1->val+l2->val)/10;
        ListNode* head = new ListNode(sum);
        ListNode* temp = head;
        
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1!=NULL && l2!=NULL)
        {
            sum   = (l1->val + l2->val + carry)%10;
            carry = (l1->val + l2->val + carry)/10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;    
        }
        
        while(l1 != NULL)
        {
            sum = (l1->val + carry)%10;
            carry = (l1->val + carry)/10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            l1 = l1->next;
        }
        
        while(l2 != NULL) 
        {
            sum = (l2->val + carry)%10;
            carry = (l2->val + carry)/10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            l2 = l2->next;
        }
        
        if (carry != 0) {
            temp->next = new ListNode(carry);
        }
        
        return head;        
        
    }
};