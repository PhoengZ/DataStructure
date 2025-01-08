#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  if (mSize!= other.size())return mSize < other.size();
  int m  = std::min(mSize,other.size());
  for (int i =0;i<m;i++){
    if (mData[i] < other[i])return true;
    if (mData[i] > other[i]) return false;
  }
  return mSize < other.size();
}

#endif
