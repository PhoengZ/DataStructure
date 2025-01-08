#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  int siz_low = mSize/k;
  int left = mSize-(siz_low*k);
  std::vector<std::vector<T>> v(k);
  size_t total  = mSize-1;
  for (int i = 0;i<k;i++){
    int x= siz_low;
    if (left != 0){
      x++;
      left--;
    }
    std::vector <T> vt(x);
    for (int j = 0;j<x;j++){
      vt[j] = mData[total];
      total--;
    }
    v[i] = vt;
  }
  return v;
}
#endif
