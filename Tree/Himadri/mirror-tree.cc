/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

/* Should convert tree to its mirror */
void mirror(Node* node)
{
     // Your Code Here
     if(node==nullptr) return;
     if(node->right == nullptr && node->left==nullptr) return;
     Node* temp = node->right;
     node->right = node->left;
     node->left = temp;
     mirror(node->left);
     mirror(node->right);
}
