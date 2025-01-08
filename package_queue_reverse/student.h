#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  int size = a+(b-a)/2;
  for (int i =a ; i<=size ; i++){
    T tmp = mData[(mFront+i)%mCap];
    mData[(mFront+i)%mCap] = mData[(mFront+b)%mCap];
    mData[(mFront+b)%mCap] = tmp;
    b--;
  }
}

#endif
