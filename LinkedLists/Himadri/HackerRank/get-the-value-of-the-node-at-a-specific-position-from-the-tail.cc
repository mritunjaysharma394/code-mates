

// Complete the getNode function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };
*
*/
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
  int n=0;
  SinglyLinkedListNode *saved_head = head;
  while(head!=nullptr) {
      head = head ->next;
      n++;
  }
  int pos = n - positionFromTail-1;
  while(pos--) {
      saved_head =  saved_head->next;
  }
  return saved_head->data;

}
