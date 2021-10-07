
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int i=1;
        while(i<k){
            temp=temp->next;
            i++;
        }
        ListNode* t1=temp;
        ListNode* t2=head;
        while(temp->next!=NULL){
            temp=temp->next;
            t2=t2->next;
        }
        swap(t2->val, t1->val);
        return head;
    }
};
