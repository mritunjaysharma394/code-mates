

// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode *new_node = new DoublyLinkedListNode(data);
    if(head==nullptr) {
        return new_node;
    }
    if(head->data >= data) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    } else {
        DoublyLinkedListNode *current = head;
        while(current->next!=nullptr && current->next->data < data) {
            current = current->next;
        }
        new_node->prev = current;
        new_node->next = current->next;
        if(current->next!=nullptr) {
            current->next->prev = new_node;
        }
        current->next = new_node;
    }



    return head;
}
