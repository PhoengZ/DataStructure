#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  std::vector <std::vector<T>> vp(k);
  for (int i = 0;i<mSize;i++){
    vp[(mSize-i-1)%k].push_back(mData[i]);
  }
  return vp;
}

#endif

