#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  std::vector <std::vector<T>> v(k);
  for (int i =mSize-1;i>=0;i--){
    v[i%k].push_back(mData[mSize-1-i]);
  }
  return v;
}

#endif

