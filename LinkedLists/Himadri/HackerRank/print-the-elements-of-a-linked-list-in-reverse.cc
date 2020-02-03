

// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    vector<int> elements;
    while(head!=nullptr) {
        elements.push_back(head->data);
        head = head->next;
    }
    for(vector<int>::reverse_iterator itr=elements.rbegin(); itr!=elements.rend(); ++itr) {
        cout << *itr << endl;
    }

}
