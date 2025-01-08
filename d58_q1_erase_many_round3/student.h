#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  int cap = mSize-pos.size();
  T * mtest = new T[cap]();
  int ind = 0;
  int j = 0;
  for (int i = 0;i<mSize;i++){
    if (ind == pos.size()||i < pos[ind]){
      mtest[j] = mData[i];
      j++;
    }else{
      ind++;
    }
  }
  delete [] mData;
  mData = mtest;
  mSize = cap;
  mCap = mSize;
}

#endif
