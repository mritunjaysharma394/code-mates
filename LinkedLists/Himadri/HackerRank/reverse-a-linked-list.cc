

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *prev=nullptr, *current;

    if(head==nullptr  || head->next==nullptr) return head;

    while(head!=nullptr) {
        current=head;
        head=head->next;
        current->next = prev;
        prev=current;
    }

    return current;

}
