int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  if(root==nullptr) return 0;
  if(root->right==nullptr && root->left ==nullptr) return 1;
  count+= countLeaves(root->right)+countLeaves(root->left);
  return count;
}
