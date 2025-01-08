#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  int cou = 0;
  int start = mSize-1;
  if (mSize == 0)return -1;
  while (start !=0){
    start = (start-1)/2;
    cou++;
  }
  return cou;
}

#endif

