#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  while (a!=b){
    if (*a == value){
      auto tmp = iterator(a.ptr);
      a++;
      tmp.ptr->prev->next = tmp.ptr->next;
      tmp.ptr->next->prev = tmp.ptr->prev;
      tmp.ptr->prev = output.mHeader;
      tmp.ptr->next = output.mHeader->next;
      output.mHeader->next->prev = tmp.ptr;
      output.mHeader->next = tmp.ptr;
      mSize--;
      output.mSize++;
    }else a++;
  }

}

#endif
