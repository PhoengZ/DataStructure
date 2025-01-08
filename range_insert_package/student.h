#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int fis = position-begin();
  int cou = last-first;
  ensureCapacity(mSize + cou);
  for (int i = mSize-1;i>=fis;i--){
    mData[i+cou] = mData[i];
  }
  for (auto it = first;it!=last;it++){
    mData[fis] = *it;
    fis++;
    mSize++;
  }

}

#endif
