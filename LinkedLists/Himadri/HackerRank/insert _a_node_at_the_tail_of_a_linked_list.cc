

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *saved_head = head;

    if(head==nullptr) {
        head = new_node;
        return head;
    } else {
        while(head->next!=nullptr) {
            head =  head->next;
        }
        head->next = new_node;
        return saved_head;
    }

}
