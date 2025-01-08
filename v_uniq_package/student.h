#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
#include <set>
#include <vector>
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  std::set <T> s;
  std::vector <T> v;
  for (int i = 0;i<mSize;i++){
    if (!s.count(mData[i])) v.push_back(mData[i]);
    s.insert(mData[i]);
  }
  T* mtest = new T[v.size()];
  for (int i = 0;i<v.size();i++){
    mtest[i] = v[i];
  }
  delete [] mData;
  mData = mtest;
  mCap = s.size();
  mSize = s.size();
  //do someting here
}

#endif
