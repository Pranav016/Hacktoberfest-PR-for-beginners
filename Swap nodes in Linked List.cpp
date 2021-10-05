/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int count(ListNode* head)
    {
        int count = 0;
        while(head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head == NULL)
            return NULL;
        
        ListNode* first = head;
        ListNode* second = head;

        int n = count(head);
        
        for(int i = 0; i < k-1; i++)
            first = first->next;
        
        for(int i = 0; i < n-k; i++)
            second = second->next;
        
        swap(first->val, second->val);
        
        return head;
    }
};
