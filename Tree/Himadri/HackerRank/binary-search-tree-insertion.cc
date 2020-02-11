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

    Node * insert(Node * root, int data) {

        if(root==nullptr) root = new Node(data);
        else {
            if(root->data <= data){
               root->right = insert(root->right, data);
            }
            else {
                root->left = insert(root->left,data);
            }
        }
        return root;
    }

};
