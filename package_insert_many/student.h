#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::map <int,T> m;
  for (int i = 0;i<data.size();i++){
    m[data[i].first] = data[i].second;
  }
  int cou = 0;
  T * mtest = new T[mSize+data.size()];
  int i = 0;
  while (i!=mSize+1){
    if (m.count(i)){
      mtest[i+cou] = m[i];
      cou++;
      m.erase(i);
    }else{
      mtest[i+cou] = mData[i];
      i++;
    }
  }
  delete[] mData;
  mData = mtest;
  mSize = mSize+data.size();
  mCap = mSize;
}

#endif
