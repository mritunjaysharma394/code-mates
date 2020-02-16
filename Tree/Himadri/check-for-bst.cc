/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */

bool isbst(Node *node, int min, int max) {
    if(node==nullptr) return true;
    if(node->data < min || node ->data > max) return false;
    return (isbst(node->left, min, node->data-1) && isbst(node->right, node->data+1, max));

}

bool isBST(Node* root) {
    // Your code here
    if(root==nullptr) return true;
    if(root->left==nullptr && root->right==nullptr) return true;
    return isbst(root, INT_MIN, INT_MAX);
}
