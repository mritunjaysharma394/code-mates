

/* you only have to complete the function given below.
Node is defined as

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


    void postOrder(Node *root) {
        if(root==nullptr) return;
        if(root->left != nullptr) postOrder(root->left);
        if(root->right != nullptr) postOrder(root->right);
        cout << root->data << ' ';
    }
