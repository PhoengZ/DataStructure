#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  if (k <= 0)return;
  int cou = last-first;
  T * mtest = new T[k];
  int ind = 0;
  for (int i = (first-begin());i<(first-begin()+k);i++){
    mtest[ind] = mData[i];
    ind++;
  }
  for (int i = (first-begin());i<(last-begin())-k;i++){
    mData[i] = mData[i+k];
  }
  ind = 0;
  for(int i = (last-begin())-k;i<(last-begin());i++){
    mData[i] = mtest[ind];
    ind++; 
  }
  delete [] mtest;

}

#endif
