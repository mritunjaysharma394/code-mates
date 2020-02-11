/*
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

    void levelOrder(Node * root) {

        if(root==nullptr) return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node * node = q.front();
            q.pop();
            cout << node->data << ' ';
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }

    }

}; //End of Solution
