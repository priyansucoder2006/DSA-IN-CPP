ool isCircular(ListNode *head) {
    if(head==NULL){
        return false;
    }
    ListNode *temp=head->next;
    while(temp&&temp!=head){
        temp=temp->next;
    }
    return temp==head;
    
}
