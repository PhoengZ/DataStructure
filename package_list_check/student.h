#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  node * now = mHeader;
  node * nt = mHeader->next;
  if (now == NULL || nt == NULL)return false;
  if (nt->prev != now)return false;
  now = now->next;
  nt = nt->next;
  size_t Size = 0;
  while (now != mHeader){
    if (now == NULL || nt == NULL)return false;
    if (nt->prev != now)return false;
    now = now->next;
    nt = nt->next;
    Size++;
  }
  return Size == mSize ? true:false;
}


#endif
