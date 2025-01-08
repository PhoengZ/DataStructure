#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  std::vector<std::vector<T>> v(k);
  for (int i =0;i<k;i++){
    std::vector<T> vt;
    int index = (mSize-1-i)%k;
    for (int j = mSize-1-i;j>=0;j-=k){
      vt.push_back(mData[index]);
      index+=k;
    }
    v[i] = vt;
  }
  return v;
}

#endif

