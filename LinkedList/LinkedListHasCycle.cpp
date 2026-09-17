bool hasCycle(ListNode* head) {
    if(!head||!head->next){
        return false;
    }
  ListNode *slow= head;
  ListNode* fast=head->next;
  while(fast!=NULL&&fast->next!=NULL&&slow!=fast){
    slow=slow->next;
    fast=fast->next->next;
  } 
  if(fast==slow){
    return true;
  } 

    return false;
 
}
