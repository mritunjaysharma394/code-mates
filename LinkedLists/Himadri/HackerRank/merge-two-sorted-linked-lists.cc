

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1==nullptr && head2 == nullptr) return nullptr;
    else if(head1==nullptr) return head2;
    else if(head2==nullptr) return head1;
    else {
        SinglyLinkedListNode *new_node;
        if(head1->data <head2->data) {
            new_node=head1;
            new_node->next = mergeLists(head1->next,head2);
        }
        else {
            new_node = head2;
            new_node->next = mergeLists(head1, head2->next);
        }

        return new_node;
    }

}
