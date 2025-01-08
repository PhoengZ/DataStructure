#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  sort(data.begin(),data.end());
  CP::vector <T> vp(data.size()+mSize);
  int ind = 0;
  int idx = 0;
  for (int i = 0;i<mSize;i++){
    if (ind < data.size() && i == data[ind].first){
      vp[idx] = data[ind].second;
      ind++;
      idx++;
    }
    vp[idx] = mData[i];
    idx++;
  }
  if (ind == data.size()-1&& data[ind].first == mSize)vp[idx] = data[ind].second;
  *this = vp;
}

#endif
