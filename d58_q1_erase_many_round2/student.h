#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  int cap = mSize-pos.size();
  int size = 0;
  T * mtest = new T[mSize-pos.size()]();
  for (int i =0;i<mSize;i++){
    auto low = lower_bound(pos.begin(),pos.end(),i);
    if (low == pos.end()||*low != i){mtest[size] = mData[i];size++;}  
  }
  delete [] mData;
  mData = mtest;
  mSize = size;
  mCap = cap;
}

#endif
