typedef pair<int, int> vh;
map <int, vh> mp;
map <int, vh> :: iterator itr;

void vTraverse(Node *root, int i, int h) {
  if(root==nullptr) return;
  itr = mp.find(i);
  if(itr==mp.end()) mp[i] = make_pair(h, root->data);
  else {
    if(itr->second.first > h) mp[i] = make_pair(h, root->data);
  }
  if(root->left!=nullptr) vTraverse(root->left, i-1, h+1);
  if(root->right!=nullptr) vTraverse(root->right, i+1, h+1);
}

void print() {
  for(itr = mp.begin(); itr!=mp.end(); itr++)
    cout << itr->second.second << ' ';
}

void topView(Node *root) {
  vTraverse(root, 0, 0);
  print();
}
