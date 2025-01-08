#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  auto bef_b = iterator(b.ptr->prev);
  auto start = a;
  while (start.ptr->prev != bef_b.ptr && start.ptr != bef_b.ptr){
    T tmp = start.ptr->data;
    start.ptr->data = bef_b.ptr->data;
    bef_b.ptr->data = tmp;
    start++;
    bef_b--;
  }
  return a;
}

#endif
