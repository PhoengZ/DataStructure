// Your code here
void Process(node * n,KeyT & k,int &t){
    if (n == NULL)return ;
    size_t hl = get_h(n->left);
    size_t hr = get_h(n->right);
    int dif = abs(hl-hr);
    if (dif > t || (dif == t && mLess(n->data.first,k))){
        t = dif;
        k = n->data.first;
    }
    Process(n->left,k,t);
    Process(n->right,k,t);
}

int get_h(node * n){
    if (n == NULL)return -1;
    return 1+std::max(get_h(n->left),get_h(n->right));
}
KeyT getValueOfMostImbalanceNode() {
    KeyT k = mRoot->data.first;
    int dif = abs(get_h(mRoot->left) - get_h(mRoot->right));
    Process(mRoot,k,dif);
    return k;
}

