/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

void removeLoop(Node* head) {
    if(!head||!head->next){
        return;
    }
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    while(fast&&fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast ){
            break;
        }
    }
    if(slow==head){
        prev->next=NULL;
        return;
    }
    if(slow!=fast){
        return;
        }
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;

        }
        fast->next=NULL;


    
}
