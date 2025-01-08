#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  T * mtest = new T[2*mSize]();
  for (int i =0;i<mSize;i++){
    mtest[i] = mData[i];
  }
  int ind = mSize;
  for (int i = mSize-1;i>=0;i--){
    mtest[ind] = mData[i];
    ind++;
  }
  delete [] mData;
  mData = mtest;
  mCap = 2*mSize;
  mSize*=2;
}

#endif
