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

    void inOrder(Node *root) {
        if(root==nullptr) return;
        if(root->left !=nullptr) inOrder(root->left);
        cout << root->data << ' ';
        if(root->right !=nullptr) inOrder(root->right);
    }

}; //End of Solution
