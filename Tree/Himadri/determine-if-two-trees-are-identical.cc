bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    if(r1==nullptr && r2==nullptr) return true;
    if(r1==nullptr) return false;
    if(r2==nullptr) return false;

    if(r1->data == r2->data) {
        return (isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
    }
    else return false;

}
