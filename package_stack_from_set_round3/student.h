#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  mCap = std::distance(first,last);
  mSize= 0;
  mData = new T[mCap]();
  while (first!=last){
    mData[mCap-1-mSize] = *first;
    mSize++;
    first++;
  }
}

#endif
