

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1==nullptr && head2==nullptr) return true;
    else if(head1==nullptr && head2 !=nullptr) return false;
    else if(head1!=nullptr && head2==nullptr) return false;
    else {
        while(head1!=nullptr && head2!=nullptr) {
            if(head1->data==head2->data) {
                head1 = head1->next;
                head2 = head2->next;
            }
            else return false;
        }
        if(head1==nullptr && head2==nullptr) return true;
        else return false;
    }
}
