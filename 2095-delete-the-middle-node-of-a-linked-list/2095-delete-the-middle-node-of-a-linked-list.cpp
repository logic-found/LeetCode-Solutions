class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head) return head;
        else if(!head->next) return head=NULL;
        ListNode* slow=head,*fast=head;
        ListNode* prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;}
        ListNode* temp=prev->next;
        prev->next=temp->next;
        delete(temp);
        return head;
    }
};