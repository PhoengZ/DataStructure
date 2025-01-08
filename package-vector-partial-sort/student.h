#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>


template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  sort(pos.begin(),pos.end());
  int ind = 0;
  std::vector <T> vp(pos.size());
  for (int i =0 ;i<pos.size();i++)vp[i] = *pos[i];
  sort(vp.begin(),vp.end(),comp);
  for (int i =0;i<pos.size();i++){
    *pos[i] = vp[ind];
    ind++;
  }
}

#endif
