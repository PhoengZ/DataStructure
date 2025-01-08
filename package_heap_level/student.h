#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <queue>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  std::queue <std::pair<int,int>> q;
  q.push({0,0});
  while (!q.empty()){
    std::pair <int,int> p = q.front();
    q.pop();
    if (p.second == k)r.push_back(mData[p.first]);
    int left = p.first*2 + 1;
    int right = p.first*2 + 2;
    if (left < mSize && p.second < k)q.push({left,p.second+1});
    if (right < mSize && p.second < k)q.push({right,p.second+1});
  }
  sort(r.begin(),r.end(),mLess);
  std::vector<T> vp;
  for (int i = r.size()-1;i>=0;i--){
    vp.push_back(r[i]);
  }
  return vp;
}

#endif

