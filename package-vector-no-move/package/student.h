#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  auto low = std::upper_bound(aux.begin(),aux.end(),idx);
  int ind = low-aux.begin();
  int ex;
  if (low == aux.begin() && aux.size()!= 0){
    ex = idx;
  }else{
    int bef = ind-1;
    ex = idx - aux[bef];
  }
  return mData[ind][ex];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
   aux.push_back(mCap);
}

#endif
