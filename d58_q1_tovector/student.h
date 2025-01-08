#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  if (k > mSize)k = mSize;
  for (int i =0;i<k;i++){
    res.push_back(mData[(mFront + i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  mData = new T[to-from]();
  mCap = to-from;
  mSize = to-from;
  int i =0;
  while (from != to){
    mData[i] = *from;
    from++;
    i++;  
  }
  mFront = 0;
}

#endif
