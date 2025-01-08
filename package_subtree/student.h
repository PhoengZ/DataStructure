#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  if (n == NULL)return 0;
  return 1+process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  if (mRoot == NULL)return std::pair<KeyT,MappedT>();
  size_t tl = process(mRoot->left);
  size_t tr = process(mRoot->right);
  delete_all_nodes(left.mRoot);
  delete_all_nodes(right.mRoot);
  left.mRoot = mRoot->left;
  right.mRoot = mRoot->right;
  mRoot->left = NULL;
  mRoot->right = NULL;
  left.mSize = tl;
  right.mSize = tr;
  mSize = 1;
  return std::pair<KeyT,MappedT>(mRoot->data.first,mRoot->data.second);
}

#endif

