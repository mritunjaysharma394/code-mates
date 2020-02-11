/*
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;

} node;

*/


void decode_huff(node * root, string s) {
    int i;
    char c;
    node *n = root;
    while(i!=s.size()) {
        c = s[i];
        i++;
        if(c=='0') n = n->left;
        else n = n->right;
        if(n->data!='\0'){
            cout << n->data ;
            n = root;
        }
    }
}
