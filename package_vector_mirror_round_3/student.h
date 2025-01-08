#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  if (2*mSize > mCap)expand(2*mSize);
  for (int i = mSize-1;i>=0;i--){
    mData[mSize] = mData[i];
    mSize++;
  }
}

#endif
