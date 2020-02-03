

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *saved_head =  head, *prev;
    while(position--) {
        prev = head;
        head =  head->next;
    }
    new_node->next = head;
    prev->next = new_node;
    return saved_head;
}
