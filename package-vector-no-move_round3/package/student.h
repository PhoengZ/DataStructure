#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  int up = std::upper_bound(aux.begin(),aux.end(),idx)-aux.begin();
  if (up >0)idx-= aux[up-1];
  return mData[up][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  aux.push_back(mCap);
}

#endif
