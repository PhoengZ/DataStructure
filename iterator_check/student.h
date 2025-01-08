#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  int ind = it-mData;
  if (ind >= mSize)return false;
  return true;
}

#endif
