ListNode* removeNodes(ListNode* head) {
    if(!head||!head->next){
        return head;
    }
    head->next=removeNodes(head->next);
    if(head->val<head->next->val){
        ListNode*temp=head->next;
        delete head;
        return temp;
    }
   return head; 
}
