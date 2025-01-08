#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  if (mSize == 0)return false;
  int n = it-&mData[0];
  if (n < 0 || n >= mSize)return false;
  return true;
}

#endif
