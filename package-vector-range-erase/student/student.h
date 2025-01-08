#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <set>
#include <algorithm>

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  sort(ranges.begin(),ranges.end());
  std::set <int> s;
  CP::vector <T> cp;
  int ind =0;
  int i =0;
  while(i<mSize){
    int left = ranges[ind].first-begin();
    int right = ranges[ind].second-begin();
    bool check = s.count(right);
    if (left <= i && right >= i  || check){
      if (check){
        ind++;
        continue;
      }
      while (i < mSize && i<right){
        i++;
        s.insert(i);
      }
      ind++;
    }else {
      cp.push_back(mData[i]);
      i++;
    } 
  }
  *this = cp;
}

#endif
