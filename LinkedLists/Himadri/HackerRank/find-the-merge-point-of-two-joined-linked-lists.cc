

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int l1=0, l2=0, diff, op;
    SinglyLinkedListNode *h1 =  head1, *h2 = head2;
    while(h1!=nullptr) {
        l1++;
        h1=h1->next;
    }
    while(h2!=nullptr) {
        l2++;
        h2=h2->next;
    }
    diff = abs(l1-l2);
    if(l1>=l2) {
        while(diff--) head1=head1->next;
    }
    else while(diff--) head2=head2->next;
    while(head1!=nullptr && head2!=nullptr) {
        if(head1==head2) {
            op=head1->data;
            break;
        }
        else {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return op;
}
