#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  node * start = mHeader->next;
  while (start != mHeader){
    if (start->data == value){
      node * tmp = start;
      start = start->next;
      start->prev = tmp->prev;
      tmp->prev->next = start;
      delete tmp;
      mSize--;
    }else start = start->next;
  }
}

#endif
