

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    if(head==nullptr || head->next==nullptr) return false;
    SinglyLinkedListNode *single_step=head, *double_step=head->next;
    while(double_step!=nullptr && double_step->next!=nullptr ) {
        if(single_step == double_step) return true;
        single_step = single_step->next;
        double_step = double_step->next->next;

    }
    return false;

}
