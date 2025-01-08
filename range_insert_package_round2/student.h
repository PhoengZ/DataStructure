#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int cap = (last-first)+mSize;
  T * mtest = new T[cap]();
  int siz = 0;
  for (int i = 0;i<(position-begin());i++){
    mtest[i] = mData[i];
    siz++;
  } 
  while (first!=last){
    mtest[siz] = *first;
    siz++;
    first++;
  }
  for (int i = position-begin();i<mSize;i++){
    mtest[siz] = mData[i];
    siz++;
  }
  mCap = cap;
  mSize = siz;
  delete [] mData;
  mData = mtest;
}

#endif
