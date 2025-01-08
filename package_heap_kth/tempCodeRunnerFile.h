#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  if (k == 1)return mData[0];
  T MAX,low;
  if (mLess(mData[1],mData[2])){MAX = mData[2];low = mData[1];}
  else{low = mData[2],MAX = mData[1];}
  if (k == 2)return MAX;
  return low;
}

#endif
