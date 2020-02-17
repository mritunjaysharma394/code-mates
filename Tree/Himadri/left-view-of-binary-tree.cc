/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

stack<int> ls;

void print_left(Node *root, int level){
    if(root==nullptr || level < ls.top()) return;

    if(level > ls.top()) {
        cout << root->data << ' ';
        ls.push(level);
    }
    print_left(root->left, level+1);
    print_left(root->right, level+1);

}

// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   // Your code here
   if(root==nullptr) return;
   ls.push(-1);
   print_left(root, 0);

}
