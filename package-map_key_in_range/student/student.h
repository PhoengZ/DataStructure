#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "map_bst_lite.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, const KeyT &a, const KeyT &b, std::vector<MappedT> &result) const {
    if (n == NULL)return;
    if (mLess(b,n->data.first)){
        my_recur(n->left,a,b,result);
    }else if (mLess(n->data.first,a)){
        my_recur(n->right,a,b,result);
    }else{
        my_recur(n->left,a,b,result);
        result.push_back(n->data.second);
        my_recur(n->right,a,b,result);
    }
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<MappedT> CP::map_bst<KeyT, MappedT, CompareT>::value_in_key_range(const KeyT &a, const KeyT &b) const {
	std::vector<MappedT> vp;
    my_recur(mRoot,a,b,vp);
    return vp;
}

#endif
