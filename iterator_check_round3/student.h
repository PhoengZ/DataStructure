#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  if (it <mData ||  it >= mData+mSize)return false;
  return true;
}

#endif
