#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  

  bool first = true;
  T min;
  for (int i = 0;i<pos.size();i++){
    if (first){
      if (pos[i] < mSize && pos[i] >= 0){
        min = mData[(mFront + pos[i])%mCap];
        first = false;
      }
    }else{
      if (pos[i] < mSize && pos[i] >= 0 && comp(mData[(mFront + pos[i])%mCap],min))min = mData[(mFront + pos[i])%mCap];
    }
  }
  return min;
  /*bool first = true;
  T min;
  for (int i = 0;i<pos.size();i++){
    if (first &&pos[i] < mSize ){
      min = mData[(pos[i] + mFront) % mCap];
      first = false;
    }
    else if(pos[i] < mSize&& comp(mData[(pos[i]+mFront)%mCap],min))min = mData[(pos[i]+mFront)%mCap];
  }
  return min;*/
}

#endif
