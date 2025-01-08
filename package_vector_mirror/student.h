#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  T * mtest = new T[2*mSize]();
  for (int i =0;i<mSize;i++){
    mtest[i]  = mData[i];
  }
  int ind = 1;
  for (int i = mSize;i<2*mSize;i++){
    mtest[i] = mData[mSize-ind];
    ind++;
  }
  delete [] mData;
  mData = mtest;
  mCap = 2*mSize;
  mSize = 2*mSize;
}

#endif
