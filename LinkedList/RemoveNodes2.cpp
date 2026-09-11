ListNode* removeElements(ListNode* head, int val) {
    if(!head){
        return head;
    }
    head->next=removeElements(head->next,val);
    if(head->val==val){
        ListNode*temp=head->next;
        delete head;
        return temp;
    }
    return head;
    
}
