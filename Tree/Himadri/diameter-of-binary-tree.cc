int height(Node* root) {
    int h;
    if(root==nullptr) return 0;
    if(root->right==nullptr && root->left == nullptr) return 1;
    h =  1 + max(height(root->right), height(root->left));
    return h;
}

int diameter(Node* node)
{
   // Your code here
   int d, h, lh, rh, ld, rd;

   if(node==nullptr) return 0;

   lh = height(node->left);
   rh = height(node->right);
   h = lh + rh  + 1;

   ld = diameter(node->left);
   rd = diameter(node->right);
   d = max(ld, rd);

   return max(h, d);

}
