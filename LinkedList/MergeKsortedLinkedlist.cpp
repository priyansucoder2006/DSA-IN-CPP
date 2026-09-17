/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */
Node* sortedMerge(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    Node* dummy = new Node(0);
    Node* tail = dummy;
    while (head1 && head2) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    tail->next = head1 ? head1 : head2;
    Node* result = dummy->next;
    delete dummy;
    return result;
}

Node* merge(Node* arr[], int start, int end) {
    if (start == end) return arr[start];
    int mid = start + (end - start) / 2;
    Node* head1 = merge(arr, start, mid);
    Node* head2 = merge(arr, mid + 1, end);
    return sortedMerge(head1, head2);
}

Node* mergeKLists(Node* arr[], int K) {
    if (K == 0) return nullptr;
    return merge(arr, 0, K - 1);
}
