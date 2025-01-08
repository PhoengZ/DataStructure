#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  for (int i =0;i<mSize;i++)if (mData[i] == k)return true;
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  int idx = -1;
  for (int i = mSize-1;i>=0;i--){
    if(mData[i] == k){
      idx = i;
      break;
    }
  }
  if (idx == -1)return idx;
  int h = 0;
  while (idx > 0){
    idx = (idx-1)/2;
    h++;
  }
  return h;
}

#endif

