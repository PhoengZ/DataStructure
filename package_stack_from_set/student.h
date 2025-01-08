#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  mCap = std::distance(first,last);
  mData = new  T[mCap];
  mSize = 0;
  if (mCap > 0){
    last--;
    while (first!=last){
      mData[mSize] = *last;
      mSize++;
      last--;
    }
    mData[mSize] = *last;
    mSize++;
  }
  
}

#endif
