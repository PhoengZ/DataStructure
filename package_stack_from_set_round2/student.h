#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //if (last == first)return;
  mCap = std::distance(first,last);
  mSize = 0;
  mData = new T[mCap]();
  if (mCap == 0)return;
  int i =0;
  while (first!=last){
    mData[mCap-1-i] = *first;
    i++;
    first++;
    mSize++;
  }
  
}

#endif
