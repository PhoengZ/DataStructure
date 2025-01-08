#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if (it == end())return result;
  auto bef = iterator(it.ptr->prev);
  auto af = iterator(mHeader->prev);
  bef.ptr->next = mHeader;
  mHeader->prev = bef.ptr;
  result.mHeader->next = it.ptr;
  it.ptr->prev = result.mHeader;
  result.mHeader->prev = af.ptr;
  af.ptr->next = result.mHeader;
  result.mSize = mSize-pos;
  mSize = pos;
  return result;
}

#endif
