#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  std::vector <std::vector<T>> vp(k);
  int nor = mSize/k;
  int diff = mSize%k;
  int index = mSize-1;
  for (int i =0;i<k;i++){
    int size = nor;
    if (diff!=0){size++;diff--;}
    for (int j = 0;j<size;j++){
      vp[i].push_back(mData[index]);
      index--;
    }
  }
  return vp;
}
#endif
