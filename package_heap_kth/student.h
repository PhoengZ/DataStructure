#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  if(k == 1)return mData[0];
  T MAX = mLess(mData[1],mData[2])? mData[2]:mData[1];
  T MIN = mLess(mData[1],mData[2])? mData[1]:mData[2];
  if (MAX == mData[1]){
    if (mSize>4 && mLess(MIN,mData[3]))MIN = mData[3];
    if (mSize>5 && mLess(MIN,mData[4]))MIN = mData[4];
  }else{
    if (mSize>6 && mLess(MIN,mData[5]))MIN = mData[5];
    if (mSize>7 && mLess(MIN,mData[6]))MIN = mData[6];
  }
  if (k == 2)return MAX;
  return MIN;
}

#endif
