#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <map>

template <typename T>
void CP::vector<T>::uniq() {
  CP::vector<T> vp;
  std::map <T,int> m;
  for (int i = 0;i<mSize;i++){
    if(m[mData[i]] != 1)vp.push_back(mData[i]);
    m[mData[i]] = 1;
  }
  *this = vp;
}

#endif
