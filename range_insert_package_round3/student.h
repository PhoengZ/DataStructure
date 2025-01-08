#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int pos = position-begin();
  int cap = (last-first)+mSize;
  T*mtest= new T[cap]();
  for (int i =0;i<pos;i++){
    mtest[i] = mData[i];
  }
  int ind = pos;
  while (first!=last){
    mtest[ind] = *first;
    ind++;
    first++;
  }
  for (int i = pos;i<mSize;i++){
    mtest[ind] = mData[i];
    ind++;
  }
  delete [] mData;
  mSize = cap;
  mCap = mSize;
  mData = mtest;
}

#endif
