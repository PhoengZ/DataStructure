#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  pos = mSize-pos;
  ensureCapacity(mSize+1);
  for (int i = mSize+1;i>pos;i--){
    mData[i] = mData[i-1];
  }
  mData[pos] = value;
  mSize++;
}

#endif
