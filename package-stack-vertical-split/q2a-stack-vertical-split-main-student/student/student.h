#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  int siz = mSize/k;
  int diff = mSize%k;
  int real = siz;
  if (diff!=0){real++;diff--;}
  int left = mSize-real;
  int right = mSize;
  for (int i = 0;i<k;i++){
    std::stack<T> st;
    for (int i = left;i<right;i++){
      st.push(mData[i]);
    }
    output.push_back(st);
    right -= real;
    real = siz;
    if (diff!=0){real++;diff--;}
    left-=real;
  }
    
  
}

#endif
