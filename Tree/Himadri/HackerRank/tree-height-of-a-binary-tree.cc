/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int h, lh, rh;
        if(root==nullptr) return 0;
        if(root->left==nullptr && root->right==nullptr) return 0;
        lh = height(root->left);
        rh = height(root->right);
        h = 1 + max(lh, rh);
        return h;
    }

}; //End of Solution
