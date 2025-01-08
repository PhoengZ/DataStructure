#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  T mtest[k];
  int left = first-begin();
  int right = last-begin();
  for (int i = 0;i<k;i++){
    mtest[i] = mData[i+left];
  }
  int ind = 0;
  for (int i = left+k;i<right;i++){
    mData[left+ind] = mData[i];
    ind++;
  }
  for (int i =0;i<k;i++){
    mData[left+ind] = mtest[i];
    ind++;
  }
}

#endif
