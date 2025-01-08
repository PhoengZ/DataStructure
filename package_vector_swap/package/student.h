#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  T * mtest = mData;
  mData = other.mData;
  other.mData = mtest;
  std::swap(mSize, other.mSize);
  std::swap(mCap, other.mCap);
}

#endif
