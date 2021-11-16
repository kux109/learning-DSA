//Leetcode 237


class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        int t = node->val;
        node->val = node->next->val;
        node->next->val = t;
        
        ListNode* temp = node->next->next;
        delete node->next;
        node->next = temp;
    }
};