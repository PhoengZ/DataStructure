#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  int siz = std::min(other.size(),mSize);
  for (int i = 0;i<siz;i++){
    if (mData[i] < other[i])return true;
    else if (mData[i] > other[i]) return false;
  }
  return mSize < other.size();
}

#endif
