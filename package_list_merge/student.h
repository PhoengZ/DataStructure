#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  auto start = ls.begin();
  while (start != ls.end()){
    if (start->size() == 0){
      start++;
      continue;
    }
    mHeader->prev->next = start->mHeader->next;
    start->mHeader->next->prev = mHeader->prev;
    mHeader->prev = start->mHeader->prev;
    start->mHeader->prev->next = mHeader;
    start->mHeader->prev = start->mHeader;
    start->mHeader->next = start->mHeader;
    mSize += start->mSize;
    start->mSize = 0;
    start++;
  }
}

#endif
