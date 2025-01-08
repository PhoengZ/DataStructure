#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  int diff = mSize%k;
  int siz = mSize/k;
  int ind = 0;
  for (int i =0;i<k;i++){
    int real = siz;
    if (diff!=0){real+=1;diff--;}
    std::queue <T> q;
    for (int j = 0;j<real;j++){
      q.push(mData[(ind+mFront)%mCap]);
      ind++;
    }
    output.push_back(q);
    
  }
}

#endif
