struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void splitList(Node* head, Node*& head1, Node*& head2) {
    if (!head) return;
    Node *slow = head, *fast = head;
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }
    head1 = head;
    if (fast->next->next == head)
        fast = fast->next;

    head2 = slow->next;
    fast->next = head2;    
    slow->next = head1;    
}

void printCircular(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
