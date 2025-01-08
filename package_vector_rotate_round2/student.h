#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  int left = first-begin();
  int right = last-begin();
  int ind = left;
  T mtest [k];
  int idx = 0;
  for (int i = left;i<left+k;i++){
    mtest[idx] = mData[i];
    idx++;
  }
  for (int i =left+k;i<right;i++){
    mData[ind] = mData[i];
    ind++;
  }
  for (int i = 0;i<k;i++){
    mData[ind] = mtest[i];
    ind++;
  }
}

#endif
